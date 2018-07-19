#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	string input,before_string,result_string;
	int repeatcount = 0,flag = 0;
	
	while(cin >> input){
		
		if(input == ".")
			break;
		
		if(input == before_string){
			++repeatcount;
		}else{
			repeatcount = 1;
			before_string = input;
		}
		
		if(flag < repeatcount){
			flag = repeatcount;
			result_string = before_string;
		}
		
	}
	if(flag==1){
		cout << "沒有重複的字串" << endl;
	}else{
		cout << result_string << " 連續重複出現 " << flag << " 次" << endl;
	}
	
	system("pause");
	return 0;
}