#include<iostream>
#include<cstdlib>
#include<string>
#include<stdexcept>
using namespace std;
// 這種方法最多存到34階乘,如果要更高 必須採用大數演算法
int fact(int n){
	
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if(n > 1)
		return fact(n-1)*n;
}

int main(){
	
	int input_n = 0;
	unsigned long long result;
	do{
		cout << "輸入你要的階乘(不小於0) : ";
		cin >> input_n;
		
		try{
			if(input_n < 0)
				throw runtime_error("不得小於0");
			result = fact(input_n);
			cout << "!" << input_n << " : " << result << endl; 
		}catch(runtime_error err){
			err.what();
			char n;
			cout << "輸入不得小於0,重新輸入?y or n : ";
			cin >> n;
			if(!cin||n=='n')
				break;
		}
		
	}while(cin);
	
	system("pause");
	return 0;
}