#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	�޼��q�{��
	
	1. �޼ƥi�H�����q�{��,���O���᪺�޼ƥ������n�����q�{��
	
	2. �N��޼Ƶ����q�{��,���O�٬O�i�H�ۦ浹���Ѽ�
	
*/
// �@�Ө��,�ӧP�_�O�_���Ƽ�,�p�G�O���ܫ᭱�[s�^��
string make_plural(size_t ctr,const string &word,const string &ending = "s"){
	
	
	return (ctr>1)? word+ending : word;
}
int main(){
	
	string s1 = "success",s2 = "failure";
	
	cout << "success���Ƽ� : " << make_plural(2,s1,"es") << endl;
	cout << "success����� : " << make_plural(1,s1) << endl;
	cout << "failure���Ƽ� : " << make_plural(2,s2) << endl;
	cout << "success����� : " << make_plural(1,s2) << endl;
	
	system("pause");
	return 0;
}