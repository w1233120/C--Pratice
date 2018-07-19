#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
void test02();

int main(){
	
	test01();
	
	system("pause");
	return 0;
}

//static_cast -> 只要不包含const的就可以轉換
void test01(){
	int a = 20;
	int b = 3;
	double result = static_cast<double>(a)/b;
	// 強制進行浮點數運算
	cout << result << endl;
}

//const_cast -> 改變運算物件的底層const