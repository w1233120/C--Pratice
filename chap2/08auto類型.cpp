#include<iostream>
#include<cstdlib>

/*
	auto 類型(C++11新標準)
	
	有時候我們在宣告變數的時候,要清楚表明變數的資料型態,但並不是這麼容易做到
	於是C++11 的新標準 引入了auto類型,就能用他來讓編譯器來分析
	
	auto item = val1 + val2;
	
	autoㄧ般會忽視掉頂層const
	
	例如:
		const int a = 10;
		auto b = a;  b -> int b 就會變成這樣
*/


int main(){
	
	// int val1 = 1;
	// double val2 = 2.55;
	// auto item = val1 + val2;
	
	// std::cout << item << std::endl;
	
	
	const int i = 42;
	
	auto j = i;  //  j -> int j
	
	const auto &k = j;  // const int &k
	
	auto *p = &i; // const int *p
	
	const auto j2 = i,&k2 = i;  // const int j2 , &k2
	
	system("pause");
	return 0;
}