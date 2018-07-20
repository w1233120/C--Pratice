#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<stdexcept>
using namespace std;

double bmi(double tall,double weight){
	
	return weight/(tall*tall);
}
int main(){
	
	// input tall,weight
	double tall = 0,weight = 0;
	do{
		cout << "請輸入身高(公尺) : ";
		cin >> tall;
		cout << "請輸入體重(kg) : ";
		cin >> weight;
		decltype(bmi(tall,weight)) result;
		
		try{
			if(tall<=0||weight<=0)
				throw runtime_error("不得為0");
			result = bmi(tall,weight);
		}catch(runtime_error err){
			err.what();
			char n;
			cout << "請問要重新輸入嗎?y or n : ";
			cin >> n;
			if(!cin||n=='n')
				break;
		}
	
		cout << "你的bmi為 : " << result << endl;
	}while(cin);
	
	system("pause");
	return 0;
}