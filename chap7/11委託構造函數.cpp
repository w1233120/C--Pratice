#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	ίӚ���캯��
	
	1. ίӚ���캯�����ȳ�ʼ����ίӚ�Ę��캯��,Ȼ���ٳ�ʼ��ίӚ�ĺ���
	
*/

class Student{
	public :
		typedef string pos;
		typedef int gg;
		Student(pos s, gg a, pos d):name(s), age(a), id(d){cout << "Student(pos s,gg a, pos d)" << endl;}
		Student():Student("person", 0, "123456"){cout << "Student()" << endl;}
		Student(istream& is):Student(){cout << "Student(iostream& is)" << endl;}
		 //   ίӚ����			��ίӚ����
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
	�|����l�ƲĤ@�Ӻc�y��ƨð������餺��
	�b��l�ƲĤG�Ӻc�y��ư������餺��
	�̫�~�O�ĤT��
	*/
	system("pause");
	return 0;
}