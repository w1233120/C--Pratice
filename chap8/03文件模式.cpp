/*
	1. ���Ҧ�
	
	a. �C�@��stream,�����@�Ӭ��������Ҧ�(file mode)
	b. in �HŪ�����覡���}
	c. out �H�g���覡���}
	e. app �C���g�ާ@�e���w��������
	f. ate ���}����ߧY�w��������
	g. trunc �I�_���
	h. binary �H�G�i��覡�i��IO
	
	2. ���Ҧ��������
	
	a. ifstream �� fstream �]�w�� in �Ҧ�
	b. ofstream �� fstream �]�w�� out �Ҧ�
	c. �u���� out �]�w,�~�i�H�]�w trunc �Ҧ�
	d. �u�n trunc �S�Q�]�w , �N�i�H�]�w app �Ҧ�,���|�q�{�Hout���覡���}
	e. ate �� binary �i�H�Q�Ҧ����y�ϥ�
	
	3. �Hout�Ҧ����}���,�|��������󤺪����e
	
	ofstream out(file); -> �|�����Nfile�����e�����I�_
	���F���ᥢ�̭������e,�i�H�]�wapp�Ҧ�
	ofstream out(file , ofstream::app); -> �����w������,����ۼg�ާ@
*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
void write(string);
int main(int argc, char* argv[]){
	
	write("string.txt");
	
	system("pause");
	return 0;
}

void write(string file){
	
	cout << "�п�J(�����J#����) : ";
	
	ofstream out(file, ofstream::app);
	
	if(out){
		
		string word;
		while(cin >> word){
			if(word == "#")
				break;
			else
				out << word << " ";
		}
		
	}else{
		
		cerr << "This file can not open : " << endl;
	}
	
	out.close();
}