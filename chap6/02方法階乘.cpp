#include<iostream>
#include<cstdlib>
#include<string>
#include<stdexcept>
using namespace std;
// �o�ؤ�k�̦h�s��34����,�p�G�n�� �����ĥΤj�ƺt��k
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
		cout << "��J�A�n������(���p��0) : ";
		cin >> input_n;
		
		try{
			if(input_n < 0)
				throw runtime_error("���o�p��0");
			result = fact(input_n);
			cout << "!" << input_n << " : " << result << endl; 
		}catch(runtime_error err){
			err.what();
			char n;
			cout << "��J���o�p��0,���s��J?y or n : ";
			cin >> n;
			if(!cin||n=='n')
				break;
		}
		
	}while(cin);
	
	system("pause");
	return 0;
}