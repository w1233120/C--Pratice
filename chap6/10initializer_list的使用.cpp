#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

/*
	�i�ܤ޼� initializer_list<T>
	�\������vector �� begin(),end(),size()
	���O�S��push_back(n)
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
	// p.s. initializer_list���޼ƶǻ��n�Τj�A����_��
	cout << result << endl;
	
	system("pause");
	return 0;
} 