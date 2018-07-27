#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	默認構造函數
	
	1. class中有需要委託構造函數時候,必須有默認構造函數
	2. 
	
	p.s. 養成好習慣一定要給默認構造函數
*/
class Person{
	public :
		Person():name("no name"),age(0){}
		void display(){
			cout << name << " " << age << endl;
		}
	private:
		string name;
		unsigned age;
};
int main(int argc, char* argv[]){
	
	Person p;
	p.display();
	
	
	system("pause");
	return 0;
}