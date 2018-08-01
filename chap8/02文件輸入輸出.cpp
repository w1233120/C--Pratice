/*
	����J��X
	
	���Y�� : <fstream>
	
	1. fstream���ާ@
		a. fstream �W��(s); -> �إߤ@��fstream������,�B���}�W��s�����
		b. fstream �W��(s, mode); -> �P�e�@�Ӻc�y�������,���O�ݭn��mode��~���}���
		c. �W��.open(s); -> ���}�W��s�����,�åB�򪫥�j�b�@�_,�^�Ǭ�void
		d. �W��.close(); -> �����P����j�b�@�_�����,�^��void
		e. �W��.is_open(); -> �ˬd�O�_���}�åB�|������
		
	2. �ϥΤ��y����
		ifstream in(file);
		ofstream out;
		out.open(file+".copy");
		
		if(out)  ->  �ˬdopen�O�_���\
		
		in.close(); -> �������
		in.open(file+"2"); -> �i�H�A���}��L���
*/
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
void print(string);
void print_single(string);
void write(string);
int main(int argc, char *argv[]){
	
	print_single("string.txt");
	
	write("string.txt");

	
	system("pause");
	return 0;
}

// �g�@�{��,�HŪ�Ҧ����}�@�Ӥ��,�N���eŪ��@��string��vector��
// �N�C�@�氵���@�ӿW�ߪ������s�bvector��

void print(string file_name){
	
	vector<string> v;
	
	ifstream in(file_name);
	
	if(in){
		string line;
		while(getline(in,line)){
			v.push_back(line);
		}
		
		for(auto it = v.cbegin();it!=v.cend()&&!it->empty();it++){
			cout << *it << endl;
		}
		
	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
	
}

// �N�W�����{���אּ�@�ӳ�r���@�Ӥ���
void print_single(string file_name){
	
	vector<string> v;
	
	ifstream in(file_name);
	
	if(in){
		string word;
		while(in >> word){
			v.push_back(word);
		}
		
		for(auto it = v.cbegin();it!=v.cend()&&!it->empty();it++){
			cout << *it << endl;
		}

	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
}

// ���� : ���Ƽg�i���
void write(string file_name){
	
	ofstream out(file_name);
	
	if(out){
		cout << "�п�J(�̫�д����J'#') : ";
		string word;
		while(getline(cin,word)){
			if(word == "#")
				break;
			else
				out << word;
		}
	}else{
		cerr << "can not open this file : " << file_name << endl;
	}
}
