#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	constexpr方法
	
	constexpr int a = 42 -> 這叫做常數表達式 (c++11的新標準)
	
	constexpr函數的條件
	
	a . 回傳值必須為字面值常量
		ex : 程式中寫下1、1.0、3.14159這樣的數值，這類數值稱之為「字面常量」
	
	b . 引數必須為字面值類型
	
	c . 函數必須只有一個return
	
	d . inline函數跟constexpr函數基本上聲明與定義都用在標頭檔裡面
*/
constexpr int new_sz(){
	
	return 40;
}

constexpr size_t scale(size_t cdn){
	
	return new_sz() *cdn;
}

int main(int argc,char *argv[]){
	
	const int a = new_sz();
	
	int arr[scale(2)];
	const int i = 2;
	int arr2[scale(i)]; // 此處如果i是非常數,編譯器就會報錯
	cout << a << endl;
	
	system("pause");
	return 0;
}