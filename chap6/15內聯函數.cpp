#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	���p���
	
	1. ���p��ƪ��ϥΪ��p
		
		a. �W�Ҹ��p
		b. �y�{²�檽��
		c. �ե��W�c
		
	
*/

// ���p��� ��Ƴ̫e���[�W inline
// �L�|�����٥h�եΪ��ɶ�,��ƽեάO�ݭn�y�{��,�ܹ��w�B�z��#define
inline string &shorterstring(const string& s1,const string &s2){
	
	return s1.size() < s2.size()? const_cast<string&>(s1):const_cast<string&>(s2);
}

int main(int argc,char *argv[]){
	
	string s1("aaa"),s2("aaaa");
	
	shorterstring(s1,s2) = "aaaaa";
	
	cout << shorterstring(s1,s2) << endl;
	// �b�o�̭��@�sĶ�����̭��|�����ܦ� s1.size()<s2.size()? const_cast<string&>(s1):const_cast<string&>(s2)
	// ��h�եΪ��ɶ�,�{�����t�׷|�[��
	system("pause");
	return 0;
}