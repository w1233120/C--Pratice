#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	方法重載
	
	1. 引數型態跟引數個數不能相同
	
	2. 常數跟非常數是可以重載的
	 
	ex : int print(int i);
		 int print(const int i); -> 也算是同一個方法,但編譯器無法辨認
		 
		int print(int *const a); -> a指向一個固定的adress
		int print(int *a); -> 算同一個方法,但是編譯器無法辨認 
		
		第一組 共同點,就是不影響傳進來的實際參數
		
		第二組 就算沒有const,效果也是一樣
	
	true :
		
		int print(const int& a); -> a指向一個常量,a是一個常數的參考
		int print(int& a); -> a指向一個變數,a是一個變數參考
		
		int print(const int *a);
		int print(int *a);
		
		但是這上面兩組,傳進來會分成常數跟變數的差別
	
	方法不能除了回傳類型以外的都相同,下面是個錯誤的例子
	void print(const int i);
	int print(const int i); -> 這樣第二個就是錯誤的例子
	
	using haha = int;
	haha print(const haha i);
	void print(const int i);   -> 這樣兩個的引數型態還是一模一樣
*/
const string &shorting(const string& s1, const string& s2){
	
	return s1.size()<=s2.size()?s1:s2;
}

string &shorting(string &s1,string &s2){
	
	auto &r = shorting(const_cast<const string&>(s1),const_cast<const string&>(s2));
	
	return const_cast<string&>(r);
}

// 傳入兩個string的參考,用參考變數r 來接收

int main(int argc,char *argv[]){
	
	string s1("abc"),s2("abbc");
	
	//string shorting(); 這段會把外面的shorting的函式給蓋掉
	
	shorting(s1,s2) = "aaa";
	// 這個方法回傳的是s1的參考,也就是左值
	
	cout << shorting(const_cast<const string&>(s1),const_cast<const string&>(s2)) << endl;
	
	system("pause");
	return 0;
}