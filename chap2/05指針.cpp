#include<iostream>
#include<cstdlib>

/*
	指針
	
	int a = 42;
	int *ptr = &a;
	
	或
	
	int a = 42;
	int *ptr; ptr = &a;
	
	C++ 11 新標準 空指針表示
	
	int *ptr = nullptr;

*/

int main(){
	
	int a = 42;
	int *ptr = &a;
	int **ppptr = &ptr; // 指向指針的指針 
	
	// 空指針 用c++ 11 新標準來定義
	int *pptr = nullptr; // 相當於等價 int *p1 = 0;
	
	
	int val = 42;
	int *p;
	int *&r = p; // r是一個對指針p的引用
	r = &val;
	*r = 0;
	
	std::cout << *ptr << " " << val << std::endl;
	
	system("pause");
	return 0;
}