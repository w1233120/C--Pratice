#include<iostream>	// 標頭檔
#include<cstdlib>
void print01();
void print01_3();
void print01_4();
int main(){
	

	print01_4();
	
	return 0;
}

void print01(){
	
	std::cout << "Enter two numbers" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " 
	<< v1 + v2 << std::endl;
	
	system("pause");
}

// 印出hello world
void print01_3(){
	
	std::cout << "Hello, World" << std::endl;
	
	system("pause");
}

// 寫出兩數相乘 並且印出
void print01_4(){
	
	int a = 0 , b = 0 ;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> a >> b ;
	std::cout << "a * b = " << a*b << std::endl;
	
	system("pause");
}
