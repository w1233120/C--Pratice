#include<iostream>
#include<cstdlib>
/*
	a . 常量
	
	const int a = 10;  -> 這個稱為常數
	
	1. 要給初始化值
	2. 不能改變裡面的值
	
	b . 常量的引用
	
	const int a = 10;
	const int &r = a;  -> 正確的常數引用
	
	錯誤引用
	r1 = 42; -> r1是對常數的引用,所以不能改變其值
	int &r2 = a; -> 非常量引用指向一個常量對象
	
	c. 常量指針
	
	const double pi = 3.1415;
	const double *cptr = &pi; -> 正確的常量指針
	
	p.s. 常量指針也可以指向非常量的變數,但是常量指針指向的值,無法透過常量指針改變
	
	d. const指針
	
	int errNumb = 0;
	int *const curErr = &errNumb; -> 這代表一種常量指針,意思是 'curErr會ㄧ直指向errNumb' .
	
	e. 頂層const跟底層const
	
	頂層const -> 如果指針本身是常量
	
	底層const -> 如果指針指向的對象為常量
	
	f. 常量表達式
	
	常量表達式 -> 指值不會改變,而且在編譯過程中就能得到計算結果的表達式
	
	const int max = 20; -> 常量表達式
	const int limit = max + 1; -> 常量表達式
	int a = 10; -> 非常量表達式
	const int sz = get_size(); -> 儘管sz本身為常量,但是初始化要等到運行才能知道
	
	C++11 新標準 constexpr
	
	constexpr int max = 20; -> 用constexpr來宣告這句是常量表達式,並且編譯時會檢查
	
	如果你認定一個變數為常數表達式,就可以宣告為constexpr型態
	
	constexpr 的字面常量為 nullptr或是0;
	
*/

int main(){
	
	const double pi = 3.14;  // 常數宣告   ->  頂層const
	const double &rpi = pi;  // rpi為參考以pi的地址
	const double *ppi = &pi; //ppi為指標變數指向常數pi  -> 底層const
	const double const *ptr = &pi; // 代表指標變數ptr永遠指向pi
	
	std::cout << "pi = " << pi << '\n';
	std::cout << "rpi = " << rpi << '\n';
	std::cout << "*ppi = " << *ppi << '\n';
	std::cout << "*ptr = " << *ptr;
	
	std::cout << std::endl;
	
	
	int null = 0;
	int *p = &null;
	
	system("pause");
	return 0;
}


/*
	練習:
	
	const int v2 = 0   -> 頂層const
	int v1 = v2 -> 底層const
	

*/