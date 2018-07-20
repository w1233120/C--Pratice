#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>
using namespace std;
int upper(const string &s){
	for(int index = 0;index < s.size();index++){
		if(isupper(s[index])){
			return 1;
		}
	}
	return 0;
}

void to_upper(string &s){
	for(auto &c : s){
		c = toupper(c);
	}
	
	/*
		for(auto it = s.begin();it!=s.end()&&!it->empty();it++){
			if((*it <= 'Z')&& (*it >= 'A'))
					*it = *it + 32; ASCII碼
		}
	*/
}

int main(){
	// input
	string s;
	cout << "請輸入一英文單字 : ";
	cin >> s;
	if(upper(s))
		cout << "此字串含有大寫字母" << endl;
	else
		cout << "此字串沒有大寫字母" << endl;
	
	to_upper(s);
	
	cout << s << endl;
	
	system("pause");
	return 0;
}