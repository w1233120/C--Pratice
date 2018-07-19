#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;
/*
	標頭檔 stdexcept
*/
void test01();

int main(){
	
	test01();
	system("pause");
	return 0;
}

void test01(){
	
	int a,b;
	cout << "請輸入兩個整數 : ";
	while(cin >> a >> b){
		try{
			if(b==0)throw runtime_error("is not");
			cout << static_cast<double>(a)/b << endl;
		}catch(runtime_error err){
			err.what();
			cout << "重新輸入?y or n: ";
			char n;
			cin >> n;
			if(!cin||n=='n')
				break;
		}
	
	}
}