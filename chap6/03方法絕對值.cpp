#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int num){
	
	return abs(num);
	
	/*
		��l�g�k
		auto result = (num < 0)? -num:num;
		return result;
	*/
}

int main(){
	
	//input
	int input_number = 0;
	cout << "�п�J�A�Q�n���� : ";
	cin >> input_number;
	// result store
	auto result = fact(input_number);
	
	cout << "|" <<input_number << "| = " << result << endl; 
	
	system("pause");
	return 0;
}