#include<iostream>
#include<cstdlib>
#include<string>
#include<cctype>
#include<vector>
#include<stdexcept>
using namespace std;
/*
	數組的引數傳遞
	如沒有要對元素進行操作,盡量使用const,避免錯誤
*/

void print(const int *beg,const int *end){
	while(beg!=end)
		cout << *beg++ << " ";
	cout << endl;
}

void print_01(const int arr[],size_t arr_size){
	
	for(size_t index = 0;index < arr_size;index++){
		
		cout << arr[index] << " ";
	}
	cout << endl;
}

int main(){
	
	int a[] = {1,2};
	print(begin(a),end(a));
	print_01(a,end(a)-begin(a));
	system("pause");
	return 0;
}