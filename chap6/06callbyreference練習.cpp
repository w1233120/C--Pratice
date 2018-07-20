#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int reset(const string &s,const char &c,unsigned &count){
	
	int index = 0;
	int firstfind = s.size();
	
	while(index!=s.size()){
		if(s[index] == 'c'){
			++count; // 隱式的回傳次數
			if(firstfind == s.size())
				firstfind = index;
		}
		++index;
	}
	return firstfind;
}

int main(){
	//input
	string s;
	cout << "請輸入一字串: ";
	cin >> s;
	//count
	unsigned count = 0;
	//find char
	char c;
	cout << "請輸入想尋找的字元 : ";
	cin >> c;
	int index = reset(s,c,count);
	
	if(count==0)
		cout << "沒找到" << c << "的字母" << endl;
	else{
		cout << c << "這個字母出現 " << count << " 次" << endl;
		cout << c << "第一次出現在第 " << index+1 << " 個位置" << endl;
	}
	
	system("pause");
	return 0;
}