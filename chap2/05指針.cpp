#include<iostream>
#include<cstdlib>

/*
	���w
	
	int a = 42;
	int *ptr = &a;
	
	��
	
	int a = 42;
	int *ptr; ptr = &a;
	
	C++ 11 �s�з� �ū��w���
	
	int *ptr = nullptr;

*/

int main(){
	
	int a = 42;
	int *ptr = &a;
	int **ppptr = &ptr; // ���V���w�����w 
	
	// �ū��w ��c++ 11 �s�зǨөw�q
	int *pptr = nullptr; // �۷�󵥻� int *p1 = 0;
	
	
	int val = 42;
	int *p;
	int *&r = p; // r�O�@�ӹ���wp���ޥ�
	r = &val;
	*r = 0;
	
	std::cout << *ptr << " " << val << std::endl;
	
	system("pause");
	return 0;
}