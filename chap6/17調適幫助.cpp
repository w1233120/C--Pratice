#include<iostream>
#include<cstdlib>
#include<string>
#include<cassert>
#include<cstddef>
#include<vector>
using namespace std;
/*
	�վA���U
	
	assert : 
	
	1. ���Y�� <cassert>
	
	2. assert(expr);
	
	3. ��assert(expr)���u,assert����]���|��,�p�G����assert�|��X�T���òפ�{��
	
	NDEBUG :
	
	1. �p�G�w�qNDEBUG,�hassert����]���|��,�p�G�S���w�q,�hassert�|�B���ˬd
	

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
