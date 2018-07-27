#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	建構子
	
	默認建構子 Person() = default;
	
	如果有自己創立建構子,編譯器就不會再產生一個默認建構子
	
	
*/

// Person範例

struct Person{
	
	string name;
	string address;
	unsigned age;
	// 建構子
	Person(string client_name, string client_address, unsigned client_age):
	name(client_name), address(client_address), age(client_age){}
	// 默認建構子
	Person() = default;
	// 建構子列表初始化
	//Person():name("haha"), address("god"), age(5){}
};

int main(int argc, char *argv[]){
	
	system("pause");
	return 0;
}