#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	內聯函數
	
	1. 內聯函數的使用狀況
		
		a. 規模較小
		b. 流程簡單直接
		c. 調用頻繁
		
	
*/

// 內聯函數 函數最前面加上 inline
// 他會直接省去調用的時間,函數調用是需要流程的,很像預處理器#define
inline string &shorterstring(const string& s1,const string &s2){
	
	return s1.size() < s2.size()? const_cast<string&>(s1):const_cast<string&>(s2);
}

int main(int argc,char *argv[]){
	
	string s1("aaa"),s2("aaaa");
	
	shorterstring(s1,s2) = "aaaaa";
	
	cout << shorterstring(s1,s2) << endl;
	// 在這裡面一編譯完成裡面會直接變成 s1.size()<s2.size()? const_cast<string&>(s1):const_cast<string&>(s2)
	// 減去調用的時間,程式的速度會加快
	system("pause");
	return 0;
}