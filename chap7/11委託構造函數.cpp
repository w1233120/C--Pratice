#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	委託構造函數
	
	1. 委託構造函數會先初始化被委託的構造函數,然後再初始化委託的函數
	
*/

class Student{
	public :
		typedef string pos;
		typedef int gg;
		Student(pos s, gg a, pos d):name(s), age(a), id(d){cout << "Student(pos s,gg a, pos d)" << endl;}
		Student():Student("person", 0, "123456"){cout << "Student()" << endl;}
		Student(istream& is):Student(){cout << "Student(iostream& is)" << endl;}
		 //   委託函數			被委託函數
		void display();
	private:
		pos name;
		gg age;
		pos id;
};
void Student::display(){
	cout << name << " " << age << " " << id << endl;
}
int main(int argc,char *argv[]){
	
	Student s(cin);
	s.display();
	
	/*
	穦﹍て材篶硑ㄧ计磅︽ㄧ计砰ず场
	﹍て材篶硑ㄧ计磅︽ㄧ计砰ず场
	程琌材
	*/
	system("pause");
	return 0;
}