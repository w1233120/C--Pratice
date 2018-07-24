#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	函數指針
	
	1. 函數指針的宣告方式,簡單來說就是用指針變數代替函數名稱
	
	ex :
	
	int test01(const int&,const int&);
	
	變成
	
	int (*pf)(const int&,const int&);  -> 這樣pf就變成函數指針
	
	pf = test01; pf函數指針指向test01的函數
	pf = &test01; 這樣也可以
	
	下面三種調用函數的方式都相同
	
	int i = pf(1,2);
	int j = (*pf)(1,2);
	int k = test01(1,2);
	
	2. p.s. 函數指針不存在轉換規則,所以只要引數或回傳值有任何不一樣都是非法的(必須精準)
		 
		 指向重載函數也是一樣必須精準
	
	string test02(const int&,const int&);
	int test03(const int*,const int*);
	
	3. 函數當做引數
	
	ex : 
	
	int test04(const int&, const int&, int (*pf)(const int&,const int&));
	int z = test04(1,2,test01);
	
	但是上面第一條語句有點麻煩對吧
	
	typedef (*pf)(const int&,const int&);
	int test04(const int&,const int&,pf); -> 這樣是不是簡略多了
	
*/
void test01(const int& , const int&);
typedef void (*pf)(const int& , const int&); // 變成一種資料型態
void test02(const int&,const int&, pf);

int main(int argc,char *argv[]){
	
	test02(1,2,test01);

	system("pause");
	return 0;
}
void test01(const int& a,const int& b){

	cout << "this is test01" << endl;
}

void test02(const int& a, const int& b, pf pp){
	
	pp(1,1);
	
	cout << "this is test02 " << endl;
}

