/*
	string stream
	
	istringstream 從string讀取數據
	ostringstream 向string寫入數據
	
	1. stringstream的操作
	
		a. sstream 名稱(s); -> 創造sstream的物件裡面保存一個string s
		b. 名稱.str() -> 回傳sstream物件裡面保存的string的值
		c. 名稱.str(s) -> 將string s保存到sstream物件裡面
*/
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<cstdlib>
#include<string>
using namespace std;
void read(vector<string>& ,string);
void print(vector<string> );
int main(int argc,char *argv[]){
	
	vector<string> vec;
	
	read(vec, "string.txt");
	
	print(vec);
	
	system("pause");
	return 0;
}

// 寫一程式,把文件讀到的放進vector裡面,然後使用一個
// istringstream 從 vector 讀取元素
void read(vector<string>& v,string file_name){
	
	ifstream in(file_name);
	string word;
	if(in){
		while(in >> word)
			v.push_back(word);
	}else{
		cerr << "This file can not open : " << file_name << endl;
	}
	
}

void print(vector<string> v){
	
	for(auto it = v.begin();it!=v.end()&&!it->empty();it++){
		istringstream in(*it);
		string word;
		while(in >> word)
			cout << word << " ";
	}
	
	cout << endl;
}