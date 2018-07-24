#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	��ƫ��w
	
	1. ��ƫ��w���ŧi�覡,²��ӻ��N�O�Ϋ��w�ܼƥN����ƦW��
	
	ex :
	
	int test01(const int&,const int&);
	
	�ܦ�
	
	int (*pf)(const int&,const int&);  -> �o��pf�N�ܦ���ƫ��w
	
	pf = test01; pf��ƫ��w���Vtest01�����
	pf = &test01; �o�ˤ]�i�H
	
	�U���T�ؽեΨ�ƪ��覡���ۦP
	
	int i = pf(1,2);
	int j = (*pf)(1,2);
	int k = test01(1,2);
	
	2. p.s. ��ƫ��w���s�b�ഫ�W�h,�ҥH�u�n�޼ƩΦ^�ǭȦ����󤣤@�˳��O�D�k��(�������)
		 
		 ���V������Ƥ]�O�@�˥������
	
	string test02(const int&,const int&);
	int test03(const int*,const int*);
	
	3. ��Ʒ��޼�
	
	ex : 
	
	int test04(const int&, const int&, int (*pf)(const int&,const int&));
	int z = test04(1,2,test01);
	
	���O�W���Ĥ@���y�y���I�·й�a
	
	typedef (*pf)(const int&,const int&);
	int test04(const int&,const int&,pf); -> �o�ˬO���O²���h�F
	
*/
void test01(const int& , const int&);
typedef void (*pf)(const int& , const int&); // �ܦ��@�ظ�ƫ��A
void test02(const int&,const int&, pf);

int main(int argc,char *argv[]){
	
	test02(1,2,test01);

	system("pause");
	return 0;
}
void test01(const int& a,const int& b){

	cout << "this is test01" << endl;
}

void test02(const int& a, const int& b, pf pp){
	
	pp(1,1);
	
	cout << "this is test02 " << endl;
}

