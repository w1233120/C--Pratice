#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	��k����
	
	1. �޼ƫ��A��޼ƭӼƤ���ۦP
	
	2. �`�Ƹ�D�`�ƬO�i�H������
	 
	ex : int print(int i);
		 int print(const int i); -> �]��O�P�@�Ӥ�k,���sĶ���L�k��{
		 
		int print(int *const a); -> a���V�@�өT�w��adress
		int print(int *a); -> ��P�@�Ӥ�k,���O�sĶ���L�k��{ 
		
		�Ĥ@�� �@�P�I,�N�O���v�T�Ƕi�Ӫ���ڰѼ�
		
		�ĤG�� �N��S��const,�ĪG�]�O�@��
	
	true :
		
		int print(const int& a); -> a���V�@�ӱ`�q,a�O�@�ӱ`�ƪ��Ѧ�
		int print(int& a); -> a���V�@���ܼ�,a�O�@���ܼưѦ�
		
		int print(const int *a);
		int print(int *a);
		
		���O�o�W�����,�Ƕi�ӷ|�����`�Ƹ��ܼƪ��t�O
	
	��k���ణ�F�^�������H�~�����ۦP,�U���O�ӿ��~���Ҥl
	void print(const int i);
	int print(const int i); -> �o�˲ĤG�ӴN�O���~���Ҥl
	
	using haha = int;
	haha print(const haha i);
	void print(const int i);   -> �o�˨�Ӫ��޼ƫ��A�٬O�@�Ҥ@��
*/
const string &shorting(const string& s1, const string& s2){
	
	return s1.size()<=s2.size()?s1:s2;
}

string &shorting(string &s1,string &s2){
	
	auto &r = shorting(const_cast<const string&>(s1),const_cast<const string&>(s2));
	
	return const_cast<string&>(r);
}

// �ǤJ���string���Ѧ�,�ΰѦ��ܼ�r �ӱ���

int main(int argc,char *argv[]){
	
	string s1("abc"),s2("abbc");
	
	//string shorting(); �o�q�|��~����shorting���禡���\��
	
	shorting(s1,s2) = "aaa";
	// �o�Ӥ�k�^�Ǫ��Os1���Ѧ�,�]�N�O����
	
	cout << shorting(const_cast<const string&>(s1),const_cast<const string&>(s2)) << endl;
	
	system("pause");
	return 0;
}