#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;
/*
	���Y�� stdexcept
*/
void test01();

int main(){
	
	test01();
	system("pause");
	return 0;
}

void test01(){
	
	int a,b;
	cout << "�п�J��Ӿ�� : ";
	while(cin >> a >> b){
		try{
			if(b==0)throw runtime_error("is not");
			cout << static_cast<double>(a)/b << endl;
		}catch(runtime_error err){
			err.what();
			cout << "���s��J?y or n: ";
			char n;
			cin >> n;
			if(!cin||n=='n')
				break;
		}
	
	}
}