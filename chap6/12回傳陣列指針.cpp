#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
// �¼з�
int (*function(int i))[10];

// C++11 �s�з�
// ���m�^��
auto func(int i) -> int(*)[10];

// ��ڭ̪��D��Ʀ^�Ǫ����w�O���V���Ӱ}�C �i�H�ϥ�decltype
int odd[] = {1,2,3};
int even[] = {1,2,3};
decltype(odd) &funct(int i){
	
	return (i%2)?odd:even;
}

// pratice

// �^�ǰ}�C���ޥεM��Ӱ}�C�]�t10��string����,���¼з�
string (&oldfun(int i))[10];

// �A�����O���W,��m�^��,decltype

// ���O���W
using arrt = string[5];
arrt& type_fun(int i);

// ��m�^��
auto funcc(int i) -> string(&)[5];

// decltype
string arr[5];
decltype(arr)& fuuc(int i);


int main(){
	
	int arr[10];  // �̭���10��int�������}�C
	int *p2[10]; // �̭���10��int*�����Ъ��}�C
	int (*p3)[10] = &arr; // p3���V�@��10��int�������}�C
	int *p4 = arr; // p4���Varr�Ĥ@�Ӥ���

	system("pause");
	return 0;
}