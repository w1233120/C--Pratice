#include<iostream>
#include<cstdlib>
void print01();
void print02();
int main(){
	
	print02();
	return 0;
}

void print01(){
	
	int i;
	int &ri = i; // �Ѧҥ�����l��
	int k;
	//&ri = k;    // �ޥη|��@�}�l����l�ȹ�H�j�w�A�@�_
	i = 5;
	ri = 10;
	
	std::cout << i << " " << ri << std::endl;
	
	system("pause");
	
}

void print02(){
	
	int i = 0,&r1 = i;
	double d = 1.0,&r2 = d;
	
	r1 = d;
	
	std::cout << i << std::endl;
	system("pause");
}