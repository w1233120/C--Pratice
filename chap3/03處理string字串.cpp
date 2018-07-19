#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>
/*
	處理字串字元
	
	標頭檔 cctype.h
	
	
*/
using namespace std;
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	test05();
	system("pause");
	return 0;
}

// for each迴圈來輸出字元
/*
	for(宣告變數:要輸出的對象){
		
		
	}
*/
void test01(){
	
	string str("hello");
	for(auto c: str){
		cout << c << endl;
	}
	
	string str1("hello world!!!");
	// punct_sum的型態跟str1.size()的回傳型態一樣 -> unsigned
	decltype(str1.size()) punct_sum = 0; 
	// 統計標點符號數量 並不計算空白
	for(auto c : str1){
		if(ispunct(c))
			punct_sum++;
	}
	cout << punct_sum << endl;
}
// 將字串轉為大寫
void test02(){
	
	string str("hello");
	for(auto &c: str){
		c = toupper(c);
	}
	
	cout << str << endl;
	// 第一個詞轉大寫
	string str1("god bless you");
	for(decltype(str1.size()) index = 0;(index!=str1.size())&&(!isspace(str1[index]));index++){
		str1[index] = toupper(str1[index]);
	}
	
	cout << str1 << endl;
}

// 10進制轉16進制
void test03(){
	const string hex = "0123456789ABCDEF";
	cout << "請輸入你的10進制數字 中間請用空白隔開:";
	string result;
	string::size_type n;
	while(cin >> n){
		if(n < hex.size())
			result += hex[n];
	}
	
	cout << "your hex number : " << result << endl;
}

// 寫一個程式,把預設字串裡的字都改成X
void test04(){
	// for each 模式
	string str1("hello world");
	for(char &c : str1){
		c = 'X';
	}
	
	cout << str1 << endl;
	
	// while迴圈
	string str2("hello world");
	decltype(str2.size()) index = 0;
	while(index < str2.size()){
		str2[index] = 'X';
		index++;
	}
	
	cout << str2 << endl;
	
	// 傳統for迴圈
	string str3("hello world");
	for(unsigned index = 0;index < str3.size();index++){
		str3[index] = 'X';
	}
	
	cout << str3 << endl;
	
	// 空字串
	string s4;
	cout << s4[0] << endl;
}

// 輸入ㄧ字串,裡面包含標點符號,將標點符號去除後輸出
void test05(){
	
	string str;
	cout << "請輸入一個句子 : ";
	while(getline(cin,str)){
		for(auto &c : str){
			if(ispunct(c))
				c = ' ';
		}
		break;
	}
	cout << str << endl;
}

void test06(){
	
	const string s = "this is apple";
	for(auto &c:s){
		/* c 的類型為const char*/
	}
}


