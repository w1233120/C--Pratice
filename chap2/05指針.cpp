#include<iostream>
#include<cstdlib>

/*
	皐
	
	int a = 42;
	int *ptr = &a;
	
	┪
	
	int a = 42;
	int *ptr; ptr = &a;
	
	C++ 11 穝夹非 皐ボ
	
	int *ptr = nullptr;

*/

int main(){
	
	int a = 42;
	int *ptr = &a;
	int **ppptr = &ptr; // 皐皐 
	
	// 皐 ノc++ 11 穝夹非ㄓ﹚竡
	int *pptr = nullptr; // 讽单基 int *p1 = 0;
	
	
	int val = 42;
	int *p;
	int *&r = p; // r琌癸皐pまノ
	r = &val;
	*r = 0;
	
	std::cout << *ptr << " " << val << std::endl;
	
	system("pause");
	return 0;
}