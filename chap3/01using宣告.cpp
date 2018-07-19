#include<iostream>
#include<cstdlib>

/*
	using 宣告
	
	小觀念 -> head文件不該包含using宣告,避免發生衝突

*/

using std::cout;
using std::cin;
using std::endl;
int main(){
	
	int i = 0;
	cin >> i;
	cout << i << endl;
	
	system("pause");
	return 0;
}