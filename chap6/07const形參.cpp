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
					*it = *it + 32; ASCII�X
		}
	*/
}

int main(){
	// input
	string s;
	cout << "�п�J�@�^���r : ";
	cin >> s;
	if(upper(s))
		cout << "���r��t���j�g�r��" << endl;
	else
		cout << "���r��S���j�g�r��" << endl;
	
	to_upper(s);
	
	cout << s << endl;
	
	system("pause");
	return 0;
}