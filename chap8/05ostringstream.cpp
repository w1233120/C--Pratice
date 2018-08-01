/*
	使用ostringstream
	
	當我們逐步構造輸出,希望最後一次印出來的時候,ostringstream是很有用的
*/
#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
// 創造一個聚合類
// 聚合類不能有初使化列表
struct PersonInfo{
	string name;
	vector<string> phone;
};

int main(int argc, char **argv){
	
	string file_name("info.txt");
	ifstream in(file_name);
	vector<PersonInfo> person;
	if(in){
		string line,word;
		
		while(getline(in,line)){
			
			PersonInfo info;
			
			istringstream record(line);
			record >> info.name;
			
			while(record >> word){
				info.phone.push_back(word);
			}
			
			person.push_back(info);
		}
		
	}
	
	// 資料輸出
	for(auto it = person.cbegin();it!=person.cend();it++){
		cout << it->name << endl;
		for(auto pit = it->phone.cbegin();pit!=it->phone.cend();pit++){
			cout << *pit << endl;
		}
	}
	
	system("pause");
	return 0;
}