#include<iostream>
#include<cstdlib>

/*
	auto ����(C++11�s�з�)
	
	���ɭԧڭ̦b�ŧi�ܼƪ��ɭ�,�n�M������ܼƪ���ƫ��A,���ä��O�o��e������
	��OC++11 ���s�з� �ޤJ�Fauto����,�N��ΥL�����sĶ���Ӥ��R
	
	auto item = val1 + val2;
	
	auto����|���������hconst
	
	�Ҧp:
		const int a = 10;
		auto b = a;  b -> int b �N�|�ܦ��o��
*/


int main(){
	
	// int val1 = 1;
	// double val2 = 2.55;
	// auto item = val1 + val2;
	
	// std::cout << item << std::endl;
	
	
	const int i = 42;
	
	auto j = i;  //  j -> int j
	
	const auto &k = j;  // const int &k
	
	auto *p = &i; // const int *p
	
	const auto j2 = i,&k2 = i;  // const int j2 , &k2
	
	system("pause");
	return 0;
}