#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	聚合類
	
	1. 所有成員都是public
	2. 沒有定義任何建構子
	3. class內沒有初始值
	4. 沒有基類跟虛擬函數(之後會提到)
	
	初始化的順序要完全一樣
*/
struct Data{
	int ival;
	string s;
};
int main(int argc, char* argv[]){
	
	Data a1 = {20,"a"};
	
	system("pause");
	return 0;
}

/*
	聚合類的三個缺點
	
	1. 要求所有人都必須是public
	2. 很容易出錯
	3. 如果刪除其中一個成員,全部初始化的物件都要修改,維護不易
*/