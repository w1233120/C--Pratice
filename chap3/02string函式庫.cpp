#include<iostream>
#include<cstdlib>
#include<string>

/*
	string 字串
	
	string也定義在namespace的std中,為一種可變長度的字元序列
	
	std::string
	
	常用操作:
	
	1. getline -> ㄧ次讀取一整行,遇到換行就結束
	2. empty -> 檢查字串是否為空,為空回傳1,不為空回傳0
	3. size -> 檢查字串的字元數,並回傳ㄧ個unsigned的值
	
*/
using namespace std;
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
int main(){
	
	test08();
	
	system("pause");
	return 0;
}

// 定義和初始化string物件

void test01(){
	
	string s1; // 默認初始化,為空字串
	string s2 = s1; // s2是s1的副本
	string s3 = "hi";
	string s4(10,'c'); // 內容為cccccccccc
	
	cout << s1 << "\n"
	<< s2 << "\n"
	<< s3 << "\n"
	<< s4 << endl;
}

// 讀寫string物件
/*
	輸入的時候會完全忽略空格
*/

void test02(){
		
	string s1,s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
}

// 讀入未知數量的string

void test03(){
	
	string word;
	while(cin>>word){
		cout << word << endl;
	}
}

// 使用getlineㄧ次讀一整行(可以讀到空白)

void test04(){
	
	string line;
	while(getline(cin,line))
		cout << line << endl;
}
// empty的使用  檢查字串是否為空
void test05(){
	
	string line;
	while(getline(cin,line)){
		if(!line.empty())
			cout << line << endl;
	}		
}

// size的使用  回傳字串的長度(空白會算進去字元)
// size的回傳值利用auto確定是一個unsigned的值
// 所以表達式裡有size函數,就不建議使用int型態,避免問題
void test06(){
	
	string line;
	while(getline(cin,line)){
		auto len = line.size();
		cout << line << "(" << len << ")" << endl;
	}
}

// 字串大小比較
// 如果兩個字串比較以第一個相異字來比較大小
// str3 > str2 > str1
void test07(){
	
	string str1,str2,str3;
	str1 = "hello";
	str3 = "aiipl";
	str2 = "helloya";
	
	
	if(str3 > str2)
		cout << "str3 > str2" << endl;
	else
		cout << "str3 < str2" << endl;
}
// 字串相加
// 字串相加ㄧ定要有一個值為string型態
// 不可以跟s4ㄧ樣兩個字面值相加
void test08(){
	string s1 = "hello ";
	string s2 = "world";
	string s3 = s1 + s2;
	cout << s3 << endl;
	
//string s4 = "hello" + "," + s2; // -> 02string函式庫.cpp(127): error C2110: '+': 無法對兩個指標進行相加
	string s5 = s2 + "," + "hello";//這樣是可以的
}

