#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	回傳指向函數的指針
	
	雖然不能直接回傳函數,但是可以回傳指向函數的指針
	
	ex : 
	
	int (*pf)(int* , int); -> pf為函數指標
	
	using F = int(int*,int); -> F為函數
	using PF = int(*)(int*,int); -> PF為指向函數的指針
	
	F f1(int , int); -> 這是錯誤的,不能直接回傳函數
	F *f1(int , int); -> 這樣才是對的
	
	或
	
	PF f1(int, int); -> PF本身就是指向函數的指針
	
	或直接
	
	int (*f1(int, int))(int*, int);
	
	int (*把函數放在這裡)(int*, int);
	
	後置類型
	
	auto f1(int, int)-> int(*)(int*, int);
	
*/

void test01(const int&, const int&);

// 宣告回傳指向函數的指針
using pp = void (*)(const int&, const int&);
pp test02();

// 舊標準
void (*test03())(const int&, const int&);

// 或是這樣
decltype(test01) *test04();


int main(int argc,char *argv[]){
	
	void (*pf)(const int&, const int&) = test04();
	pf(1,1);
	
	system("pause");
	return 0;
}

void test01(const int& a, const int &b){
	
	cout << "this is test01" << endl;
}

pp test02(){
	
	return test01;
}

void (*test03())(const int& a, const int& b){
	
	return test01;
}

decltype(test01) *test04(){
	
	return test01;
}

