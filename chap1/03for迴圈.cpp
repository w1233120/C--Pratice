#include<iostream>
#include<cstdlib>
void print01();
void print02();
void print03();
void print04();
void print05();
int main(){
	
	print05();
	return 0;
}

// for�`���m��
void print01(){
	
	int sum = 0;
	for(int i = -100;i<=100;i++){
		sum+=i;
	}
	std::cout << "sum = " << sum << std::endl;
	system("pause");
}

// for�j��N50-100����Ƭۥ[
void print02(){
	
	int sum = 0;
	for(int i = 50;i<=100;i++){
		
		sum += i;
	}
	
	std::cout << "sum = " << sum << std::endl;
	system("pause");
}

// �λ���B��l for�j�� ��10-0����ƦL�X��
void print03(){
	
	for(int i = 10;i>=0;i--){
		std::cout << i << " ";
	}
	
	std::cout << std::endl;
	system("pause");
}

// ���ܨϥΪ̿�J���� ����Ƥ�������ƦL�X��
void print04(){
	int a = 0, b = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	for(int i = a;i<=b;i++){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	system("pause");
}

// ���ϥΪ̤��_��J
void print05(){
	int sum = 0,value = 0;
	while(std::cin >> value){
		sum += value;
	}
	
	std::cout << "Sum is : " << sum << std::endl;
	
	system("pause");
}