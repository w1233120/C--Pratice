#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

/*
	可變引數 initializer_list<T>
	功能類似vector 有 begin(),end(),size()
	但是沒有push_back(n)
*/
int sum(initializer_list<int> li){
	int sum = 0;
	for(auto i = li.begin();i != li.end();i++){
		sum += *i;
	}
	return sum;
}

int main(int argc,char *argv[]){
	
	auto result = sum({1,2,3});
	// p.s. initializer_list的引數傳遞要用大括號刮起來
	cout << result << endl;
	
	system("pause");
	return 0;
} 