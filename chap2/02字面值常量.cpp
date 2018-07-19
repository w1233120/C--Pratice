#include<iostream>
#include<cstdlib>

/*
	字面值常量
	
	整數:
		十進制 -> 2
		八進制 -> 05 (前面多加一個0)
		十六進制 -> 0x2 (前面多加0x)
	
	浮點數:
		小數 : 3.14159
		科學記號: 2e4
	字元:
		'a'
	字串:
		"hello world"
	
	轉義序列:
	
		換行 -> '\n'
		跳格 -> '\t'
		反斜線 -> '\\'
						單引號 -> \'
						雙引號 -> \"
		響鈴 -> \a
*/

int main(){
	
	std::cout << "hello \f" << std::endl;
	
	system("pause");
	return 0;
}