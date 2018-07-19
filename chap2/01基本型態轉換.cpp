#include<iostream>
#include<cstdlib>

int main(){
	
	unsigned  u = 9 , u2 = 42;
	
	std::cout << u2-u << std::endl; // 33
	std::cout << u-u2 << std::endl; // 4294967263
	
	int i = 10,i2 = 42;
	std::cout << i2-i << std::endl; // 32
	std::cout << i-i2 << std::endl; // -32
	std::cout << i-u << std::endl; // 1
	std::cout << u-i << std::endl; // 4294967295
	
	
	system("pause");
	return 0;
}