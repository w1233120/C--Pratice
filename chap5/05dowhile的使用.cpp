#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
// 提示用戶輸入兩個string,然後挑出比較短的輸出他
int main(){
	
	//two string
	string s1,s2;
	do{
		cout << "請輸入兩個字串: ";
		cin >> s1 >> s2;
		if(s1.size()>s2.size())
			cout << s2 << endl;
		else
			cout << s1 << endl;
		
	}while(cin);
	
	system("pause");
	return 0;
}