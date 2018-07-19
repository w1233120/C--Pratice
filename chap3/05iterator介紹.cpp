#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;

/*
	iterator
	
	������k
		begin
		end
	
	ex:
		auto b = v.begin(),c = v.end();
		
		1. *iter -> ��^iterator���ޥΪ�����
		2. iter->member -> ��^iterator�ޥΤ�����������
		3. iter++  -> iterator�ҫ��������U�@�Ӥ���
		4. iter-- -> iterator�ҫ��������W�@�Ӥ���
*/
void test01();
void test02();
void test03();
void teat04();
void test05();
void test06();
void test07();
void test08();
int main(){
	
	test08();
	system("pause");
	return 0;
}
void test01(){
	
	string str("some thing");
	if(str.begin()!=str.end()){
		auto it = str.begin();
		*it = toupper(*it);
	}
	cout << str << endl;
}

void test02(){
	string str("some thing");
	for(auto it = str.begin();it != str.end()&& !isspace(*it);it++){
		*it = toupper(*it);
	}
	
	cout << str << endl;
}
// iterator ����
void test03(){
	
	vector<int>::iterator it; // �i�HŪ�gvector<int> �̪�����;
	string::iterator it2; // �i�HŪ�gstring�̪��r��
	
	vector<int>::const_iterator it3; // �u�i�HŪvector<int>�̪�����
	string::const_iterator it4; // �u�i�HŪstring�̪��r��
	
	// const_iterator �� const int *ptr �t���h ���O���V�`�q���O������ܩҫ��V��H����
}

void test04(){
	
	vector<int> v;
	const vector<int> cv;
	
	auto it = v.begin();	// auto������ vector<int>::iterator
	auto it2 = cv.begin();	// auto������ vector<int>::const_iterator
	
	// c++ 11 �s�з� �p�G�A�u��Ū���ާ@���ݨD,�Шϥ�cbegin��cend
	
	auto it3 = v.cbegin(); // auto������, vector<int>::const_iterator
}

// empty���ϥ�
void test05(){
	
	vector<string> str{"hi","apple","","banana"};
	for(auto it = str.cbegin();it!=str.cend()&&!it->empty();it++){
		cout << *it << endl;
	}
}

// �qcinŪ����æs�i�@��vector��H,��Ҧ������ܦ��j�g
void test06(){
	
	vector<string> str;
	string n;
	while(cin >> n){
		if(n!="#")
			str.push_back(n);
		else
			break;
	}
	
	for(auto it = str.begin();it!=str.end()&&!it->empty();it++){
		for(auto &c : *it){
			c = toupper(c);
		}
	}
	
	for(auto it = str.cbegin();it!=str.cend()&&!it->empty();it++){
		cout << *it << endl;
	}
	
}

// �гy�X�@��vector��10���� �M��ϥ�iterator��C�Ӥ������W�⭿�b��X
void test07(){
	
	vector<int> iv(10,42);
	
	for(auto it = iv.begin();it!=iv.end();it++){
		*it = *it*2;
		cout << *it << " ";
	}
	
	cout << endl;
	
}

// �G���j�M�k
void test08(){
	
	vector<int> iv{2,4,6,8};
	auto beg = iv.begin(),end = iv.end()-1;
	auto mid = iv.begin()+(end-beg-1)/2;
	
	while(end > mid){
		cout << *beg+*end<< endl;
		beg++;
		end--;
	}
	
}