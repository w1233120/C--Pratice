#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
int main(){
	
	test01();
	
	system("pause");
	return 0;
}
// break語句
// 寫一個程式,使用while循環讀取輸入,如果發現重複輸入兩次,輸出重複出現的單字
// 或著輸出一條消息沒有重複
void test01(){
	//input
	string input;
	//remamber before string
	string before_string;
	
	do{
		cout << "請輸入一個單字: ";
		cin >> input;
		if(input == before_string){
			cout << input << " 這個單字已連續輸入兩次" <<endl;
			break;
		}else{
			before_string = input;
			cout << "單字尚未重複" << endl;
		}
	}while(cin);
	
}