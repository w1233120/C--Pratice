#include<iostream>
#include<cstdlib>
void print01();
void print02();
void print03();
int main(){
	
	print03();
	
	return 0;
}
// 用while迴圈 50-100的整數相加
void print01(){
	
	int n = 50;
	int total = 0;
	while(n<=100){
		total += n;
		n++;
	}
	
	std::cout << "50+51+...+100 = " << total << std::endl;
	
	system("pause");
}
// 用遞減運算子 印出10到0的整數
void print02(){
	
	int n = 10;
	while(n>=0){
		std::cout << n << " ";
		n--;
	}
	
	std::cout << std::endl;
	
	system("pause");
}

// 提示使用者輸入兩整數,印出兩個整數範圍內的整數
void print03(){
	
	int a = 0,b = 0;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a >> b;
	
	while(++a<b){
		
		std::cout << a << " ";
	}
	
	std::cout << std::endl;
	
	system("pause");
}