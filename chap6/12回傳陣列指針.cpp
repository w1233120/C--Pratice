#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
// 舊標準
int (*function(int i))[10];

// C++11 新標準
// 尾置回傳
auto func(int i) -> int(*)[10];

// 當我們知道函數回傳的指針是指向哪個陣列 可以使用decltype
int odd[] = {1,2,3};
int even[] = {1,2,3};
decltype(odd) &funct(int i){
	
	return (i%2)?odd:even;
}

// pratice

// 回傳陣列的引用然後該陣列包含10個string元素,用舊標準
string (&oldfun(int i))[10];

// 再用類別型名,後置回傳,decltype

// 類別型名
using arrt = string[5];
arrt& type_fun(int i);

// 後置回傳
auto funcc(int i) -> string(&)[5];

// decltype
string arr[5];
decltype(arr)& fuuc(int i);


int main(){
	
	int arr[10];  // 裡面有10個int元素的陣列
	int *p2[10]; // 裡面有10個int*的指標的陣列
	int (*p3)[10] = &arr; // p3指向一個10個int元素的陣列
	int *p4 = arr; // p4指向arr第一個元素

	system("pause");
	return 0;
}