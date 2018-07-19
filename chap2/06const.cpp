#include<iostream>
#include<cstdlib>
/*
	a . �`�q
	
	const int a = 10;  -> �o�Ӻ٬��`��
	
	1. �n����l�ƭ�
	2. ������ܸ̭�����
	
	b . �`�q���ޥ�
	
	const int a = 10;
	const int &r = a;  -> ���T���`�Ƥޥ�
	
	���~�ޥ�
	r1 = 42; -> r1�O��`�ƪ��ޥ�,�ҥH������ܨ��
	int &r2 = a; -> �D�`�q�ޥΫ��V�@�ӱ`�q��H
	
	c. �`�q���w
	
	const double pi = 3.1415;
	const double *cptr = &pi; -> ���T���`�q���w
	
	p.s. �`�q���w�]�i�H���V�D�`�q���ܼ�,���O�`�q���w���V����,�L�k�z�L�`�q���w����
	
	d. const���w
	
	int errNumb = 0;
	int *const curErr = &errNumb; -> �o�N��@�ر`�q���w,�N��O 'curErr�|�������VerrNumb' .
	
	e. ���hconst�򩳼hconst
	
	���hconst -> �p�G���w�����O�`�q
	
	���hconst -> �p�G���w���V����H���`�q
	
	f. �`�q��F��
	
	�`�q��F�� -> ���Ȥ��|����,�ӥB�b�sĶ�L�{���N��o��p�⵲�G����F��
	
	const int max = 20; -> �`�q��F��
	const int limit = max + 1; -> �`�q��F��
	int a = 10; -> �D�`�q��F��
	const int sz = get_size(); -> ����sz�������`�q,���O��l�ƭn����B��~�ા�D
	
	C++11 �s�з� constexpr
	
	constexpr int max = 20; -> ��constexpr�ӫŧi�o�y�O�`�q��F��,�åB�sĶ�ɷ|�ˬd
	
	�p�G�A�{�w�@���ܼƬ��`�ƪ�F��,�N�i�H�ŧi��constexpr���A
	
	constexpr ���r���`�q�� nullptr�άO0;
	
*/

int main(){
	
	const double pi = 3.14;  // �`�ƫŧi   ->  ���hconst
	const double &rpi = pi;  // rpi���ѦҥHpi���a�}
	const double *ppi = &pi; //ppi�������ܼƫ��V�`��pi  -> ���hconst
	const double const *ptr = &pi; // �N������ܼ�ptr�û����Vpi
	
	std::cout << "pi = " << pi << '\n';
	std::cout << "rpi = " << rpi << '\n';
	std::cout << "*ppi = " << *ppi << '\n';
	std::cout << "*ptr = " << *ptr;
	
	std::cout << std::endl;
	
	
	int null = 0;
	int *p = &null;
	
	system("pause");
	return 0;
}


/*
	�m��:
	
	const int v2 = 0   -> ���hconst
	int v1 = v2 -> ���hconst
	

*/