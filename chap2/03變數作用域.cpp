#include<iostream>
#include<cstdlib>

int main(){
	
	int i = 100,sum = 0;	// 在main函式結束前都存在
	for(int i = 0; i < 10 ; i++){
		
		sum += i;	// 但是這裡的i在for迴圈結束後不存在
	}
	
	std::cout << i << " " << sum << std::endl; // 所以這裡的i為100
	
	system("pause");
	return 0;
}

/*

	output:
	
	100 45
*/