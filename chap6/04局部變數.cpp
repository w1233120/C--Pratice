#include<iostream>
#include<cstdlib>
#include<string>

int fact(){
	
	static int count = 0; // this is local staic object
	// 靜態變數在方法結束後不會銷毀,整個程式結束後才會跟著一起銷毀
	return ++count;
	
}

int main(){
	// i 為局部變數 for-loop 結束就銷毀
	for(int i = 0;i < 10;i++){
		
		std::cout << fact() << " " << std::endl;
	}
	
	std::cout << fact() << " " << std::endl;
	
	system("pause");
	return 0;
}