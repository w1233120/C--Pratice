#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

/*
	�A���L�����X�߸��u����
	
	�@���B��l > ���k�B���k�B���l > �[�B��

*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	
	system("pause");
	return 0;
}

// ��while�j��g�@�ӱ���Ū�����,Ū��42����
void test01(){
	
	int i = 0;
	cin >> i;
	while( i!= 42){
		cout << " ok " << endl;
		cin >> i;
	}
}

// �g�@�q�{���α���B��,�ӧ����ǼƬO�_��,�����_�ƭ�½��
void test02(){
	
	vector<int> result;
	vector<int>::size_type n;
	while(cin >> n){
		result.push_back(n);
	}
	auto it = result.begin();
	while(it!= result.end()){
		if(*it%2)
			*it *= 2;
		cout << *it << " ";
		++it;
	}
	
	cout << endl;
}
// ����B��l��X
void test03(){
	
	unsigned grade = 0;
	cout << "�п�J���Z : ";
	cin >> grade;
	cout << ((grade >= 90)?"high pass":(grade >= 75)? "low pass":(grade >= 60)?"pass":"fail") << endl;
}

// if...else��X
void test04(){
	string finalgrade("fail");
	unsigned grade = 0;
	cout << "�п�J���Z : ";
	cin >> grade;
	
	if(grade >= 90)
		finalgrade = "high pass";
	else if(grade >= 75)
		finalgrade = "low pass";
	else if(grade >= 60)
		finalgrade = "pass";
	
	cout << finalgrade << endl;
}

void test05(){
	
	int a = 5;
	int b = 5 << 2;
	cout << b <<endl;
}

// �줸�B��l
void test06(){
	
	unsigned long quiz = 0;
	quiz |= 1ul << 27;  // �@�ӭȲ�27�쬰1,��l��0
	// �p�G��27��P�ǨèS���q�L����
	quiz &= ~(1ul<<27);
	
	bool status = quiz & (1ul<<27);
	
	cout << status << endl;
	
}