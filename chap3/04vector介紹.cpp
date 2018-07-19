#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
/*
	vector����
	
	vector��ܪ��󪺶��X,�̭������������ۦP
	
	���Y�� vector.h
	
	using std::vector;
	
	vector<T> v1; v1�O�@�Ӫ�vector
	vector<T> v2(v1); v2���]�t�Ҧ�v1������
	vector<T> v2 = v1; v2��v1�۵� v2�������� v1�]��
	vector<T> v3(n,val); v3���]�t�Fn�ӭ��Ƥ���,n���ȬҬ�val
	vector<T> v4(n);
	vector<T> v5{a,b,c,...};
	vector<T> v6 = {a,b,c...};
	
	vector��k���
	
	push_back(i) -> �� i ���vector���̫᭱
*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
int main(){
	
	test07();
	
	system("pause");
	return 0;
}
// vector��l��
void test01(){
	
	vector<int> a{1,2,3,4,5};
	vector<string> b(5,"hello ");
	for(unsigned index = 0;index<5;index++)
		cout << b[index];
	cout << endl;
}
// vector-> push_back���
void test02(){
	
	vector<int> s;
	for(auto i=0;i<100;i++){
		s.push_back(i);
	}
	
	for(auto i =0;i<100;i++){
		cout << s[i] << " " ;
	}
	
	cout << endl;
}
// ���ϥΪ̿�J��,�æs����vector����
void test03(){
	
	vector<int> i;
	vector<int>::size_type n;
	while(cin>>n){
		i.push_back(n);
	}
	
	for(auto &a : i){
		cout << a << " ";
	}
	
	cout << endl;
}
// ���ϥΪ̿�J�r��,�s���@��vector����
void test04(){
	vector<string> s;
	string n;
	while(cin >> n){
		if(n != "#")
			s.push_back(n);
		else
			break;
	}
	
	for(auto &str : s){
		cout << str << " ";
	}
	
	cout << endl;
}
// ���ϥΪ̿�J�r��,�s��vector����,�M���ഫ���j�g,�C�ӵ����@��

void test05(){
	
	vector<string> str;
	string n;
	while(cin >> n){
		if(n!="#")
			str.push_back(n);
		else
			break;
	}
	
	for(decltype(str.size()) index = 0;index<str.size();index++){
		for(auto &s : str[index])
			s = toupper(s);
		cout << str[index] << endl;
	}
}

// �w�qvector�̭��t��10�Ӥ���,�C�Ӥ������Ȭ�42,�C�|�T�ع�@��k
void test06(){
	
	vector<int> v1(10,42);
	vector<int> v2 = v1;
	vector<int> v3{42,42,42,42,42,42,42,42,42,42};
}


void test07(){
	
	vector<int> v1;
	vector<int>::size_type n;
	while(cin >> n){
		v1.push_back(n);
	}
	
	for(decltype(v1.size()) index = 0; index < v1.size()-1;index++){
		cout << v1[index]+v1[index+1] << endl;
	}
	
	for(decltype(v1.size()) index = 0;index < v1.size()/2;index++){
		cout << v1[index]+v1[v1.size()-1-index] << endl;
	}
}