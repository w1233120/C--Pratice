#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	�غc�l
	
	�q�{�غc�l Person() = default;
	
	�p�G���ۤv�Х߫غc�l,�sĶ���N���|�A���ͤ@���q�{�غc�l
	
	
*/

// Person�d��

struct Person{
	
	string name;
	string address;
	unsigned age;
	// �غc�l
	Person(string client_name, string client_address, unsigned client_age):
	name(client_name), address(client_address), age(client_age){}
	// �q�{�غc�l
	Person() = default;
	// �غc�l�C���l��
	//Person():name("haha"), address("god"), age(5){}
};

int main(int argc, char *argv[]){
	
	system("pause");
	return 0;
}