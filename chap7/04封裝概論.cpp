#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	class �� struct���t���N�b���q�{���s���v�����@��
	class �q�{��private
	struct �q�{��public
	
	��bprivate���᪺��ĳ�� �����H�λݭn���ê���@�Ӹ`
	
	�ӭ׹��l���X�{���ƥi��0�өΦh��
*/
// ��class�Ӽg�@��Person
class Person{
	// member
private :
	string name;
	unsigned age;
	string id;
public :
	// struct
	Person() = default;
	Person(string s, unsigned n, string d):name(s), age(n), id(d){}
	// function
	const string& getname() const;
	const unsigned& getage() const;
	const string& getid() const;
};

ostream& print(ostream&, const Person&);

int main(int argc, char *argv[]){
	
	Person p1("james",25,"123456");
	print(cout, p1);
	cout << p1.getage() <<endl;
	
	system("pause");
	return 0;
}

const string& Person::getname() const{
	return name;
}
const unsigned& Person::getage() const{
	return age;
}
const string& Person::getid() const{
	return id;
}
ostream& print(ostream& os, const Person& person){
	
	os << "name : " << person.getname() << "\n"
	<< "age : " << person.getage() << "\n"
	<< "id : " << person.getid() << endl;
	
	return os;
}

