#include<iostream>
#include<cstdlib>
void print01();
/*
	decltype類型
	
	希望從表達式類型推斷要定義的變數的資料型別,但不想用該表達式的值初始化變量
	因此C++11新標準用了decltype
	
	decltype(f()) sum = x;  // sum的資料型態為f()函式的回傳類型
	
	example:
	
		const int ci = 0, &cj = ci;
		decltype(ci) x = 0;   // x為 const int 型別
		decltype(cj) y = x;  // y為 const int & 型別
		decltype(cj) z; // z 為const int &型別,所以必須初始化
		
	p.s. 如果decltype(i) 結果除非i是參考回傳才是參考,不然就是以變數的資料型態為主
			 decltype((i)) 最後結果永遠都是參考
*/


int main(){
	
	// int i = 42;
	// int *p = &i;
	// int &r = i;
	
	// decltype(r+0) a;  // 加法的結果型態為int 所以a為未初始化的int變數
	// decltype(*p) b;	 b為int & 參考,必須初始化
	// decltype((i)) c; -> 09decltype類型.cpp(32): error C2530: 'c': 參考必須初始化
	
	print01();
	system("pause");
	return 0;
}

void print01(){
	
	int a = 3,b = 4;
	decltype(a) c = a;   // 型態為int
	decltype((b)) d = a;	// 型態為int & 參考
	++c;
	++d;
	
	std::cout << "a = " << a
	<< " b = " << b << " c = "
	<< c << " d = " << d << std::endl;
}
