#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int reset(const string &s,const char &c,unsigned &count){
	
	int index = 0;
	int firstfind = s.size();
	
	while(index!=s.size()){
		if(s[index] == 'c'){
			++count; // �������^�Ǧ���
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
	cout << "�п�J�@�r��: ";
	cin >> s;
	//count
	unsigned count = 0;
	//find char
	char c;
	cout << "�п�J�Q�M�䪺�r�� : ";
	cin >> c;
	int index = reset(s,c,count);
	
	if(count==0)
		cout << "�S���" << c << "���r��" << endl;
	else{
		cout << c << "�o�Ӧr���X�{ " << count << " ��" << endl;
		cout << c << "�Ĥ@���X�{�b�� " << index+1 << " �Ӧ�m" << endl;
	}
	
	system("pause");
	return 0;
}