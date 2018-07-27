#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

/*
	friend函式
	
	如果要與類別一起存取private member
	只要再函式的前面加friend就可以了
	
	這樣會增加寫程式方面的靈活性
	
	缺點: 維護不易,降低可讀性
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
	
	s.age += a;	// 這樣addage函式就可以直接訪問age的值
	
	return s.age;
}