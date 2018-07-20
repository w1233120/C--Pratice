#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
// 引數不能含有 auto類型
void swap(int *a,int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

int main(){
	
	// input
	int a=0,b=0;
	
	cout << "輸入兩個數字作交換\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	swap(&a,&b);
	
	cout << "a = " << a << " b = " << b << endl;
	
	system("pause");
	return 0;
}