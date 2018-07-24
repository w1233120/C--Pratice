#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	�^�ǫ��V��ƪ����w
	
	���M���ઽ���^�Ǩ��,���O�i�H�^�ǫ��V��ƪ����w
	
	ex : 
	
	int (*pf)(int* , int); -> pf����ƫ���
	
	using F = int(int*,int); -> F�����
	using PF = int(*)(int*,int); -> PF�����V��ƪ����w
	
	F f1(int , int); -> �o�O���~��,���ઽ���^�Ǩ��
	F *f1(int , int); -> �o�ˤ~�O�諸
	
	��
	
	PF f1(int, int); -> PF�����N�O���V��ƪ����w
	
	�Ϊ���
	
	int (*f1(int, int))(int*, int);
	
	int (*���Ʃ�b�o��)(int*, int);
	
	��m����
	
	auto f1(int, int)-> int(*)(int*, int);
	
*/

void test01(const int&, const int&);

// �ŧi�^�ǫ��V��ƪ����w
using pp = void (*)(const int&, const int&);
pp test02();

// �¼з�
void (*test03())(const int&, const int&);

// �άO�o��
decltype(test01) *test04();


int main(int argc,char *argv[]){
	
	void (*pf)(const int&, const int&) = test04();
	pf(1,1);
	
	system("pause");
	return 0;
}

void test01(const int& a, const int &b){
	
	cout << "this is test01" << endl;
}

pp test02(){
	
	return test01;
}

void (*test03())(const int& a, const int& b){
	
	return test01;
}

decltype(test01) *test04(){
	
	return test01;
}

