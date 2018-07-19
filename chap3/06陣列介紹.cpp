#include<iostream>
#include<cstdlib>
#include<string>
#include<cstddef>
#include<vector>
using namespace std;

/*
	陣列初始化
	
	unsigned cnt = 42;  -> 非常數
	constexpr unsigned cnd = 42 -> 常數
	
	int arr[10]; 含有10個整數的陣列
	int *arr[cnd]; 含有42個整數指標的陣列
	string bad[cnt] 錯的->cnt並非常數
	string good[get_size()] 如果get_size()是constexpr時正確
*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	test06();
	system("pause");
	return 0;
}

void test01(){
	
	unsigned score[11] = {0};
	unsigned grade = 0;
	while(cin >> grade){
		if(grade <= 100)
			score[grade/10]++;
	}
	
}

// 定義一個含有10個int的陣列,使裡面每個值對應index
void test02(){
	
	constexpr unsigned array_size = 10;
	unsigned arr[array_size] = {};
	for(size_t index = 0; index < array_size;index++){
		arr[index]+=index;
		cout << arr[index] << " ";
	}
	
	cout << endl;
}

void test03(){
	constexpr unsigned array_size = 10;
	unsigned arr[array_size] = {};
	for(size_t index = 0; index < array_size;index++){
		arr[index]+=index;
	}
	
	vector<int> iv;
	for(decltype(iv.size()) index = 0; index<array_size;index++){
		iv.push_back(arr[index]);
	}
	
	for(auto i: iv){
		cout << i << " ";
	}
	
	cout << endl;
}

// 指針與陣列
void test04(){
	int num[] = {1,2,3,4,5};
	auto *p = num;
	auto ptr(num); 
	
	// 指針也可以變成iterator
	//auto *begin = num;    // 相當於begin()
	//auto *end = &num[5];	// 相當於end()
	// c++ 11 的新標準(另一種寫法,比較安全)
	int *beg = begin(num);
	int *last = end(num);
}

// 寫一段程式,用指針讓所有值變成0
void test05(){
	
	int arr[]={1,2,3,4,5};
	int *p = arr;
	int *last = end(arr);
	
	while(p < last){
		*p = 0;
		p++;
	}
	
	for(int p:arr){
		cout << p << " ";
	}
	
	cout << endl;
}

void test06(){
	
	int arr[] = {1,2,3,4,5};
	int arr2[] = {1,3,3,4,5};
	int *ptr = arr;
	int *ptr2 = arr2;
	auto arrlength = end(arr) - begin(arr);
	auto arr2length = end(arr2) - begin(arr2);
	
	if(arrlength == arr2length){
		bool answer;
		for(size_t index = 0;index < arr2length;index++,ptr++,ptr2++){
			if(*ptr==*ptr2)
				answer = true;
			else{
				answer = false;
				break;
			}
		}
		
		if(answer)
			cout << "相等" << endl;
		else
			cout << "不相等" << endl;
	}
	else
		cout << "不相等" << endl;
	
	
}