#include<iostream>
#include<cstdlib>

/*
	typedef ����
	
	�o�O�s���@�ئP�q��������
	
	ex : 
	
		typedef double wages;
		typedef wages a = 3.14;
		
	�t�~�@�� using;
	
	using si = std_item;  si ��std_item���P�q��
	
*/

int main(){
	
	typedef int haha;
	using ss = double; // C++11�s�з�
	
	haha a = 10; // �o�˴N�i�H��haha�ŧi �]��haha�H�g��int�ۦP�F
	ss b = 3.14;
	
	const haha *const ptr = &a;
	ss *const pi = &b;
	*pi = 2.23;
	
	// *ptr = 100;  -> 07typedef����.cpp(28): error C3892: 'ptr': �L�k�� const �ܼƶi����w�ʧ@
	
	std::cout << *ptr * 10 << " " << *pi << std::endl;
	
	
	system("pause");
	return 0;
}