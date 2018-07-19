#include<iostream>
#include<cstdlib>

/*
	typedef 類型
	
	這是叫做一種同義詞的概念
	
	ex : 
	
		typedef double wages;
		typedef wages a = 3.14;
		
	另外一種 using;
	
	using si = std_item;  si 為std_item的同義詞
	
*/

int main(){
	
	typedef int haha;
	using ss = double; // C++11新標準
	
	haha a = 10; // 這樣就可以用haha宣告 因為haha以經跟int相同了
	ss b = 3.14;
	
	const haha *const ptr = &a;
	ss *const pi = &b;
	*pi = 2.23;
	
	// *ptr = 100;  -> 07typedef類型.cpp(28): error C3892: 'ptr': 無法對 const 變數進行指定動作
	
	std::cout << *ptr * 10 << " " << *pi << std::endl;
	
	
	system("pause");
	return 0;
}