#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>
/*
	�B�z�r��r��
	
	���Y�� cctype.h
	
	
*/
using namespace std;
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	test05();
	system("pause");
	return 0;
}

// for each�j��ӿ�X�r��
/*
	for(�ŧi�ܼ�:�n��X����H){
		
		
	}
*/
void test01(){
	
	string str("hello");
	for(auto c: str){
		cout << c << endl;
	}
	
	string str1("hello world!!!");
	// punct_sum�����A��str1.size()���^�ǫ��A�@�� -> unsigned
	decltype(str1.size()) punct_sum = 0; 
	// �έp���I�Ÿ��ƶq �ä��p��ť�
	for(auto c : str1){
		if(ispunct(c))
			punct_sum++;
	}
	cout << punct_sum << endl;
}
// �N�r���ର�j�g
void test02(){
	
	string str("hello");
	for(auto &c: str){
		c = toupper(c);
	}
	
	cout << str << endl;
	// �Ĥ@�ӵ���j�g
	string str1("god bless you");
	for(decltype(str1.size()) index = 0;(index!=str1.size())&&(!isspace(str1[index]));index++){
		str1[index] = toupper(str1[index]);
	}
	
	cout << str1 << endl;
}

// 10�i����16�i��
void test03(){
	const string hex = "0123456789ABCDEF";
	cout << "�п�J�A��10�i��Ʀr �����ХΪťչj�}:";
	string result;
	string::size_type n;
	while(cin >> n){
		if(n < hex.size())
			result += hex[n];
	}
	
	cout << "your hex number : " << result << endl;
}

// �g�@�ӵ{��,��w�]�r��̪��r���令X
void test04(){
	// for each �Ҧ�
	string str1("hello world");
	for(char &c : str1){
		c = 'X';
	}
	
	cout << str1 << endl;
	
	// while�j��
	string str2("hello world");
	decltype(str2.size()) index = 0;
	while(index < str2.size()){
		str2[index] = 'X';
		index++;
	}
	
	cout << str2 << endl;
	
	// �ǲ�for�j��
	string str3("hello world");
	for(unsigned index = 0;index < str3.size();index++){
		str3[index] = 'X';
	}
	
	cout << str3 << endl;
	
	// �Ŧr��
	string s4;
	cout << s4[0] << endl;
}

// ��J���r��,�̭��]�t���I�Ÿ�,�N���I�Ÿ��h�����X
void test05(){
	
	string str;
	cout << "�п�J�@�ӥy�l : ";
	while(getline(cin,str)){
		for(auto &c : str){
			if(ispunct(c))
				c = ' ';
		}
		break;
	}
	cout << str << endl;
}

void test06(){
	
	const string s = "this is apple";
	for(auto &c:s){
		/* c ��������const char*/
	}
}


