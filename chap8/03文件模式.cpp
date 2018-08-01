/*
	1. 文件模式
	
	a. 每一個stream,都有一個相關的文件模式(file mode)
	b. in 以讀取的方式打開
	c. out 以寫的方式打開
	e. app 每次寫操作前均定位到文件尾端
	f. ate 打開文件後立即定位到文件尾端
	g. trunc 截斷文件
	h. binary 以二進制的方式進行IO
	
	2. 文件模式限制條件
	
	a. ifstream 跟 fstream 設定為 in 模式
	b. ofstream 跟 fstream 設定為 out 模式
	c. 只有當 out 設定,才可以設定 trunc 模式
	d. 只要 trunc 沒被設定 , 就可以設定 app 模式,文件會默認以out的方式打開
	e. ate 跟 binary 可以被所有文件流使用
	
	3. 以out模式打開文件,會直接丟棄文件內的內容
	
	ofstream out(file); -> 會直接將file的內容直接截斷
	為了不丟失裡面的內容,可以設定app模式
	ofstream out(file , ofstream::app); -> 直接定位到尾端,接續著寫操作
*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
void write(string);
int main(int argc, char* argv[]){
	
	write("string.txt");
	
	system("pause");
	return 0;
}

void write(string file){
	
	cout << "請輸入(換行輸入#結尾) : ";
	
	ofstream out(file, ofstream::app);
	
	if(out){
		
		string word;
		while(cin >> word){
			if(word == "#")
				break;
			else
				out << word << " ";
		}
		
	}else{
		
		cerr << "This file can not open : " << endl;
	}
	
	out.close();
}