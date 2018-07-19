#include<iostream>
#include<cstdlib>
void print01();
/*
	decltype����
	
	�Ʊ�q��F���������_�n�w�q���ܼƪ���ƫ��O,�����Q�θӪ�F�����Ȫ�l���ܶq
	�]��C++11�s�зǥΤFdecltype
	
	decltype(f()) sum = x;  // sum����ƫ��A��f()�禡���^������
	
	example:
	
		const int ci = 0, &cj = ci;
		decltype(ci) x = 0;   // x�� const int ���O
		decltype(cj) y = x;  // y�� const int & ���O
		decltype(cj) z; // z ��const int &���O,�ҥH������l��
		
	p.s. �p�Gdecltype(i) ���G���Di�O�ѦҦ^�Ǥ~�O�Ѧ�,���M�N�O�H�ܼƪ���ƫ��A���D
			 decltype((i)) �̫ᵲ�G�û����O�Ѧ�
*/


int main(){
	
	// int i = 42;
	// int *p = &i;
	// int &r = i;
	
	// decltype(r+0) a;  // �[�k�����G���A��int �ҥHa������l�ƪ�int�ܼ�
	// decltype(*p) b;	 b��int & �Ѧ�,������l��
	// decltype((i)) c; -> 09decltype����.cpp(32): error C2530: 'c': �Ѧҥ�����l��
	
	print01();
	system("pause");
	return 0;
}

void print01(){
	
	int a = 3,b = 4;
	decltype(a) c = a;   // ���A��int
	decltype((b)) d = a;	// ���A��int & �Ѧ�
	++c;
	++d;
	
	std::cout << "a = " << a
	<< " b = " << b << " c = "
	<< c << " d = " << d << std::endl;
}
