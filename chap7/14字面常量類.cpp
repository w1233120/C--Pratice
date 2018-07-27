#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	字面常量類
	
	1. 數據成員必須是字面常量
	2. 類別裡面至少要有一個constexpr構造函數
	3. 如有有一個成員有類內初始值,它的初始值必須是常量表達式
		或著如果是某個類型,則初始值必須使用自己的constexpr構造函數
	4. 類必須使用析構函數的默認定義,該成員負責銷毀類的對象
	
	p.s. 一般來說constexpr應該要有return 但是constexpr構造函數應該讓函數體為空
*/

class Debug{
	public :
		constexpr Debug(bool b = true):hw(b), io(b), other(b){}
		constexpr Debug(bool h, bool i, bool o):hw(h), io(i), other(o){}
		constexpr bool any(){ return hw||io||other;}
		void set_io(bool b){ io = b; }
		void set_hw(bool b){ hw = b; }
		void set_other(bool b){ other = b; }
	private:
		bool hw;
		bool io;
		bool other;
};
int main(int argc, char *argv[]){
	
	system("pause");
	return 0;
}