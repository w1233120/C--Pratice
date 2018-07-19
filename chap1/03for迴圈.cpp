#include<iostream>
#include<cstdlib>
void print01();
void print02();
void print03();
void print04();
void print05();
int main(){
	
	print05();
	return 0;
}

// for循環練習
void print01(){
	
	int sum = 0;
	for(int i = -100;i<=100;i++){
		sum+=i;
	}
	std::cout << "sum = " << sum << std::endl;
	system("pause");
}

// for迴圈將50-100的整數相加
void print02(){
	
	int sum = 0;
	for(int i = 50;i<=100;i++){
		
		sum += i;
	}
	
	std::cout << "sum = " << sum << std::endl;
	system("pause");
}

// 用遞減運算子 for迴圈 把10-0的整數印出來
void print03(){
	
	for(int i = 10;i>=0;i--){
		std::cout << i << " ";
	}
	
	std::cout << std::endl;
	system("pause");
}

// 提示使用者輸入兩整數 把兩整數之間的整數印出來
void print04(){
	int a = 0, b = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	for(int i = a;i<=b;i++){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	system("pause");
}

// 讓使用者不斷輸入
void print05(){
	int sum = 0,value = 0;
	while(std::cin >> value){
		sum += value;
	}
	
	std::cout << "Sum is : " << sum << std::endl;
	
	system("pause");
}