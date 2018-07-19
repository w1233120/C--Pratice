#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

/*
	括號無視結合律跟優先級
	
	一元運算子 > 乘法、除法、取餘 > 加、減

*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	
	system("pause");
	return 0;
}

// 用while迴圈寫一個條件讀取整數,讀到42停止
void test01(){
	
	int i = 0;
	cin >> i;
	while( i!= 42){
		cout << " ok " << endl;
		cin >> i;
	}
}

// 寫一段程式用條件運算,來找到哪些數是奇數,並讓奇數值翻倍
void test02(){
	
	vector<int> result;
	vector<int>::size_type n;
	while(cin >> n){
		result.push_back(n);
	}
	auto it = result.begin();
	while(it!= result.end()){
		if(*it%2)
			*it *= 2;
		cout << *it << " ";
		++it;
	}
	
	cout << endl;
}
// 條件運算子輸出
void test03(){
	
	unsigned grade = 0;
	cout << "請輸入成績 : ";
	cin >> grade;
	cout << ((grade >= 90)?"high pass":(grade >= 75)? "low pass":(grade >= 60)?"pass":"fail") << endl;
}

// if...else輸出
void test04(){
	string finalgrade("fail");
	unsigned grade = 0;
	cout << "請輸入成績 : ";
	cin >> grade;
	
	if(grade >= 90)
		finalgrade = "high pass";
	else if(grade >= 75)
		finalgrade = "low pass";
	else if(grade >= 60)
		finalgrade = "pass";
	
	cout << finalgrade << endl;
}

void test05(){
	
	int a = 5;
	int b = 5 << 2;
	cout << b <<endl;
}

// 位元運算子
void test06(){
	
	unsigned long quiz = 0;
	quiz |= 1ul << 27;  // 一個值第27位為1,其餘為0
	// 如果第27位同學並沒有通過測驗
	quiz &= ~(1ul<<27);
	
	bool status = quiz & (1ul<<27);
	
	cout << status << endl;
	
}