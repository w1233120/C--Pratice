#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

/*
	friend�禡
	
	�p�G�n�P���O�@�_�s��private member
	�u�n�A�禡���e���[friend�N�i�H�F
	
	�o�˷|�W�[�g�{���譱���F����
	
	���I: ���@����,���C�iŪ��
*/

class Student{
	friend unsigned addage(Student& , int);
private:
	string name;
	unsigned age;
public :
	Student(string s, unsigned n):name(s),age(n){}
	Student() = default;
	const string& getname() const{
		return name;
	}
	const unsigned& getage() const{
		return age;
	}
};

unsigned addage(Student& , int);

int main(int argc, char *argv[]){
	
	Student s1("aaa", 20);
	cout << addage(s1,5) << endl;
	cout << s1.getage() << endl;
	
	system("pause");
	return 0;
}

unsigned addage(Student& s, int a){
	
	s.age += a;	// �o��addage�禡�N�i�H�����X��age����
	
	return s.age;
}