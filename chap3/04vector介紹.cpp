#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
/*
	vector介紹
	
	vector表示物件的集合,裡面物件的類型都相同
	
	標頭檔 vector.h
	
	using std::vector;
	
	vector<T> v1; v1是一個空vector
	vector<T> v2(v1); v2中包含所有v1的元素
	vector<T> v2 = v1; v2跟v1相等 v2有的元素 v1也有
	vector<T> v3(n,val); v3中包含了n個重複元素,n的值皆為val
	vector<T> v4(n);
	vector<T> v5{a,b,c,...};
	vector<T> v6 = {a,b,c...};
	
	vector方法函數
	
	push_back(i) -> 把 i 放到vector的最後面
*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
int main(){
	
	test07();
	
	system("pause");
	return 0;
}
// vector初始化
void test01(){
	
	vector<int> a{1,2,3,4,5};
	vector<string> b(5,"hello ");
	for(unsigned index = 0;index<5;index++)
		cout << b[index];
	cout << endl;
}
// vector-> push_back函數
void test02(){
	
	vector<int> s;
	for(auto i=0;i<100;i++){
		s.push_back(i);
	}
	
	for(auto i =0;i<100;i++){
		cout << s[i] << " " ;
	}
	
	cout << endl;
}
// 讓使用者輸入數,並存成ㄧvector物件
void test03(){
	
	vector<int> i;
	vector<int>::size_type n;
	while(cin>>n){
		i.push_back(n);
	}
	
	for(auto &a : i){
		cout << a << " ";
	}
	
	cout << endl;
}
// 讓使用者輸入字串,存成一個vector物件
void test04(){
	vector<string> s;
	string n;
	while(cin >> n){
		if(n != "#")
			s.push_back(n);
		else
			break;
	}
	
	for(auto &str : s){
		cout << str << " ";
	}
	
	cout << endl;
}
// 讓使用者輸入字串,存成vector物件,然後轉換成大寫,每個詞佔一行

void test05(){
	
	vector<string> str;
	string n;
	while(cin >> n){
		if(n!="#")
			str.push_back(n);
		else
			break;
	}
	
	for(decltype(str.size()) index = 0;index<str.size();index++){
		for(auto &s : str[index])
			s = toupper(s);
		cout << str[index] << endl;
	}
}

// 定義vector裡面含有10個元素,每個元素的值為42,列舉三種實作方法
void test06(){
	
	vector<int> v1(10,42);
	vector<int> v2 = v1;
	vector<int> v3{42,42,42,42,42,42,42,42,42,42};
}


void test07(){
	
	vector<int> v1;
	vector<int>::size_type n;
	while(cin >> n){
		v1.push_back(n);
	}
	
	for(decltype(v1.size()) index = 0; index < v1.size()-1;index++){
		cout << v1[index]+v1[index+1] << endl;
	}
	
	for(decltype(v1.size()) index = 0;index < v1.size()/2;index++){
		cout << v1[index]+v1[v1.size()-1-index] << endl;
	}
}