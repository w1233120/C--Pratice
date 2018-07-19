#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
void test01();
int main(){
	
	test01();
	
	system("pause");
	return 0;
}

// 輸出每種資料型別的大小

void test01(){
	
	char a = 'a'; // 1
	string f = "hello"; // 24
	short b = 0; // 2
	int c = 0; // 4
	long d = 0; // 4
	long long e = 0; // 8
	vector<int> result; // 預設12
	int arr[20];  // 20*4 每個為int的大小
	int *p = arr;
	
	cout << sizeof(p) << endl;
}