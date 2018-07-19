#include<iostream>
#include<cstdlib>
#include<string>

/*
	string �r��
	
	string�]�w�q�bnamespace��std��,���@�إi�ܪ��ת��r���ǦC
	
	std::string
	
	�`�ξާ@:
	
	1. getline -> ����Ū���@���,�J�촫��N����
	2. empty -> �ˬd�r��O�_����,���Ŧ^��1,�����Ŧ^��0
	3. size -> �ˬd�r�ꪺ�r����,�æ^�ǣ���unsigned����
	
*/
using namespace std;
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
int main(){
	
	test08();
	
	system("pause");
	return 0;
}

// �w�q�M��l��string����

void test01(){
	
	string s1; // �q�{��l��,���Ŧr��
	string s2 = s1; // s2�Os1���ƥ�
	string s3 = "hi";
	string s4(10,'c'); // ���e��cccccccccc
	
	cout << s1 << "\n"
	<< s2 << "\n"
	<< s3 << "\n"
	<< s4 << endl;
}

// Ū�gstring����
/*
	��J���ɭԷ|���������Ů�
*/

void test02(){
		
	string s1,s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
}

// Ū�J�����ƶq��string

void test03(){
	
	string word;
	while(cin>>word){
		cout << word << endl;
	}
}

// �ϥ�getline����Ū�@���(�i�HŪ��ť�)

void test04(){
	
	string line;
	while(getline(cin,line))
		cout << line << endl;
}
// empty���ϥ�  �ˬd�r��O�_����
void test05(){
	
	string line;
	while(getline(cin,line)){
		if(!line.empty())
			cout << line << endl;
	}		
}

// size���ϥ�  �^�Ǧr�ꪺ����(�ťշ|��i�h�r��)
// size���^�ǭȧQ��auto�T�w�O�@��unsigned����
// �ҥH��F���̦�size���,�N����ĳ�ϥ�int���A,�קK���D
void test06(){
	
	string line;
	while(getline(cin,line)){
		auto len = line.size();
		cout << line << "(" << len << ")" << endl;
	}
}

// �r��j�p���
// �p�G��Ӧr�����H�Ĥ@�Ӭ۲��r�Ӥ���j�p
// str3 > str2 > str1
void test07(){
	
	string str1,str2,str3;
	str1 = "hello";
	str3 = "aiipl";
	str2 = "helloya";
	
	
	if(str3 > str2)
		cout << "str3 > str2" << endl;
	else
		cout << "str3 < str2" << endl;
}
// �r��ۥ[
// �r��ۥ[���w�n���@�ӭȬ�string���A
// ���i�H��s4���˨�Ӧr���Ȭۥ[
void test08(){
	string s1 = "hello ";
	string s2 = "world";
	string s3 = s1 + s2;
	cout << s3 << endl;
	
//string s4 = "hello" + "," + s2; // -> 02string�禡�w.cpp(127): error C2110: '+': �L�k���ӫ��жi��ۥ[
	string s5 = s2 + "," + "hello";//�o�ˬO�i�H��
}

