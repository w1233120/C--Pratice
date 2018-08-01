/*
	文件輸入輸出
	
	標頭檔 : <fstream>
	
	1. fstream的操作
		a. fstream 名稱(s); -> 建立一個fstream的物件,且打開名為s的文件
		b. fstream 名稱(s, mode); -> 與前一個構造函數類似,但是需要按mode鍵才打開文件
		c. 名稱.open(s); -> 打開名為s的文件,並且跟物件綁在一起,回傳為void
		d. 名稱.close(); -> 關閉與物件綁在一起的文件,回傳void
		e. 名稱.is_open(); -> 檢查是否打開並且尚未關閉
		
	2. 使用文件流物件
		ifstream in(file);
		ofstream out;
		out.open(file+".copy");
		
		if(out)  ->  檢查open是否成功
		
		in.close(); -> 關閉文件
		in.open(file+"2"); -> 可以再打開其他文件
*/
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
void print(string);
void print_single(string);
void write(string);
int main(int argc, char *argv[]){
	
	print_single("string.txt");
	
	write("string.txt");

	
	system("pause");
	return 0;
}

// 寫一程式,以讀模式打開一個文件,將內容讀到一個string的vector中
// 將每一行做為一個獨立的元素存在vector中

void print(string file_name){
	
	vector<string> v;
	
	ifstream in(file_name);
	
	if(in){
		string line;
		while(getline(in,line)){
			v.push_back(line);
		}
		
		for(auto it = v.cbegin();it!=v.cend()&&!it->empty();it++){
			cout << *it << endl;
		}
		
	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
	
}

// 將上面的程式改為一個單字為一個元素
void print_single(string file_name){
	
	vector<string> v;
	
	ifstream in(file_name);
	
	if(in){
		string word;
		while(in >> word){
			v.push_back(word);
		}
		
		for(auto it = v.cbegin();it!=v.cend()&&!it->empty();it++){
			cout << *it << endl;
		}

	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
}

// 延伸 : 把資料寫進文件
void write(string file_name){
	
	ofstream out(file_name);
	
	if(out){
		cout << "請輸入(最後請換行輸入'#') : ";
		string word;
		while(getline(cin,word)){
			if(word == "#")
				break;
			else
				out << word;
		}
	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
}
