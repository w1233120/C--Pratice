#include<iostream>
#include<cstdlib>
void print01();
void print02();
void print03();
int main(){
	
	print03();
	
	return 0;
}
// ��while�j�� 50-100����Ƭۥ[
void print01(){
	
	int n = 50;
	int total = 0;
	while(n<=100){
		total += n;
		n++;
	}
	
	std::cout << "50+51+...+100 = " << total << std::endl;
	
	system("pause");
}
// �λ���B��l �L�X10��0�����
void print02(){
	
	int n = 10;
	while(n>=0){
		std::cout << n << " ";
		n--;
	}
	
	std::cout << std::endl;
	
	system("pause");
}

// ���ܨϥΪ̿�J����,�L�X��Ӿ�ƽd�򤺪����
void print03(){
	
	int a = 0,b = 0;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a >> b;
	
	while(++a<b){
		
		std::cout << a << " ";
	}
	
	std::cout << std::endl;
	
	system("pause");
}