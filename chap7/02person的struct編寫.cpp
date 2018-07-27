#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
struct Person{
	// 成員變數
	string name;
	string address;
	// 建構子
	Person(string s, string a):name(s), address(a){}
	// 列表初始化建構子
	Person():name("james"),address("aaaaa"){}
	// 成員函數
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
// 因為讀取是會變動的,而且會修改到成員的值,這邊就不加入const
istream& read(istream& is, Person& person){
	
	cout << "輸入姓名 : ";
	is >> person.name;
	cout << "輸入地址 : ";
	is >> person.address;
	
	return is;
}
// 純輸出,所以不修改值,故const Person& person
ostream& print(ostream& os, const Person& person){
	
	os << "name : " << person.getname() << "\n"
	<< "address : " << person.getaddress();
	
	return os;
}