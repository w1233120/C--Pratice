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
		cout << "�п�J����(����) : ";
		cin >> tall;
		cout << "�п�J�魫(kg) : ";
		cin >> weight;
		decltype(bmi(tall,weight)) result;
		
		try{
			if(tall<=0||weight<=0)
				throw runtime_error("���o��0");
			result = bmi(tall,weight);
		}catch(runtime_error err){
			err.what();
			char n;
			cout << "�аݭn���s��J��?y or n : ";
			cin >> n;
			if(!cin||n=='n')
				break;
		}
	
		cout << "�A��bmi�� : " << result << endl;
	}while(cin);
	
	system("pause");
	return 0;
}