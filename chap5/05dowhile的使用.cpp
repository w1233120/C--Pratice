#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
// ���ܥΤ��J���string,�M��D�X����u����X�L
int main(){
	
	//two string
	string s1,s2;
	do{
		cout << "�п�J��Ӧr��: ";
		cin >> s1 >> s2;
		if(s1.size()>s2.size())
			cout << s2 << endl;
		else
			cout << s1 << endl;
		
	}while(cin);
	
	system("pause");
	return 0;
}