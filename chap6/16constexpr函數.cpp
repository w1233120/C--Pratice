#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	constexpr��k
	
	constexpr int a = 42 -> �o�s���`�ƪ�F�� (c++11���s�з�)
	
	constexpr��ƪ�����
	
	a . �^�ǭȥ������r���ȱ`�q
		ex : �{�����g�U1�B1.0�B3.14159�o�˪��ƭȡA�o���ƭȺ٤����u�r���`�q�v
	
	b . �޼ƥ������r��������
	
	c . ��ƥ����u���@��return
	
	d . inline��Ƹ�constexpr��ư򥻤W�n���P�w�q���Φb���Y�ɸ̭�
*/
constexpr int new_sz(){
	
	return 40;
}

constexpr size_t scale(size_t cdn){
	
	return new_sz() *cdn;
}

int main(int argc,char *argv[]){
	
	const int a = new_sz();
	
	int arr[scale(2)];
	const int i = 2;
	int arr2[scale(i)]; // ���B�p�Gi�O�D�`��,�sĶ���N�|����
	cout << a << endl;
	
	system("pause");
	return 0;
}