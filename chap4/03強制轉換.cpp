#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
void test02();

int main(){
	
	test01();
	
	system("pause");
	return 0;
}

//static_cast -> �u�n���]�tconst���N�i�H�ഫ
void test01(){
	int a = 20;
	int b = 3;
	double result = static_cast<double>(a)/b;
	// �j��i��B�I�ƹB��
	cout << result << endl;
}

//const_cast -> ���ܹB�⪫�󪺩��hconst