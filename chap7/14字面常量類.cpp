#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	�r���`�q��
	
	1. �ƾڦ��������O�r���`�q
	2. ���O�̭��ܤ֭n���@��constexpr�c�y���
	3. �p�����@�Ӧ�����������l��,������l�ȥ����O�`�q��F��
		�εۦp�G�O�Y������,�h��l�ȥ����ϥΦۤv��constexpr�c�y���
	4. �������ϥΪR�c��ƪ��q�{�w�q,�Ӧ����t�d�P��������H
	
	p.s. �@��ӻ�constexpr���ӭn��return ���Oconstexpr�c�y�������������鬰��
*/

class Debug{
	public :
		constexpr Debug(bool b = true):hw(b), io(b), other(b){}
		constexpr Debug(bool h, bool i, bool o):hw(h), io(i), other(o){}
		constexpr bool any(){ return hw||io||other;}
		void set_io(bool b){ io = b; }
		void set_hw(bool b){ hw = b; }
		void set_other(bool b){ other = b; }
	private:
		bool hw;
		bool io;
		bool other;
};
int main(int argc, char *argv[]){
	
	system("pause");
	return 0;
}