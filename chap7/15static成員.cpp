#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	static成員
*/
class Account{
	public :
		void calculate(){ amount += amount * interestRate; }
		static double rate(){ return interestRate; }
		static void rate(double);
	private:
		string owner;
		double amount;
		static double interestRate;
		static double initRate(); 
};
double Account::interestRate = 3.1415;   // static一定要在class外面初始化
void Account::rate(double a){
	interestRate = a;
}

int main(int argc, char *argv[]){
	
	Account a;
	double r = a.rate();
	a.rate(1.0);
	
	cout << a.rate()+10 << endl;
	
	system("pause");
	return 0;
}



