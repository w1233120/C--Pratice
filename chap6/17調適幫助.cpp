#include<iostream>
#include<cstdlib>
#include<string>
#include<cassert>
#include<cstddef>
#include<vector>
using namespace std;
/*
	調適幫助
	
	assert : 
	
	1. 標頭檔 <cassert>
	
	2. assert(expr);
	
	3. 當assert(expr)為真,assert什麼也不會做,如果為假assert會輸出訊息並終止程式
	
	NDEBUG :
	
	1. 如果定義NDEBUG,則assert什麼也不會做,如果沒有定義,則assert會運行檢查
	

*/
void print(const int ia[]){
	#ifndef NDEBUG
	auto *beg = ia;
	auto *end = &ia[sizeof(ia)-1];
		cout << __func__ << " array size is : " << end-beg << endl;
	#endif

}

int main(int argc,char *argv[]){
	
	const int i = 10;
	
	int a[4] = {i,2,3,4};
	
	print(a);
	
	system("pause");
	return 0;
}
