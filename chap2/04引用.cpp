#include<iostream>
#include<cstdlib>
void print01();
void print02();
int main(){
	
	print02();
	return 0;
}

void print01(){
	
	int i;
	int &ri = i; // 參考必須初始化
	int k;
	//&ri = k;    // 引用會跟一開始的初始值對象綁定再一起
	i = 5;
	ri = 10;
	
	std::cout << i << " " << ri << std::endl;
	
	system("pause");
	
}

void print02(){
	
	int i = 0,&r1 = i;
	double d = 1.0,&r2 = d;
	
	r1 = d;
	
	std::cout << i << std::endl;
	system("pause");
}