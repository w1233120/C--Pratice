#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
struct Person{
	// �����ܼ�
	string name;
	string address;
	// �غc�l
	Person(string s, string a):name(s), address(a){}
	// �C���l�ƫغc�l
	Person():name("james"),address("aaaaa"){}
	// �������
	string getname() const{
		return name;
	}
	string getaddress() const{
		return address;
	}
};
istream &read(istream& , Person& );
ostream &print(ostream& , const Person& );

int main(int argc, char *argv[]){
	
	Person a1;
	read(cin,a1);
	print(cout,a1);
	system("pause");
	return 0;
}
// �]��Ū���O�|�ܰʪ�,�ӥB�|�ק�즨������,�o��N���[�Jconst
istream& read(istream& is, Person& person){
	
	cout << "��J�m�W : ";
	is >> person.name;
	cout << "��J�a�} : ";
	is >> person.address;
	
	return is;
}
// �¿�X,�ҥH���ק��,�Gconst Person& person
ostream& print(ostream& os, const Person& person){
	
	os << "name : " << person.getname() << "\n"
	<< "address : " << person.getaddress();
	
	return os;
}