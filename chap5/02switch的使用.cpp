#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
void test02();
void test03();
int main(){
	
	test03();
	
	system("pause");
	return 0;
}
// �g�@�q�{��,��if�ӧP�_cinŪ�J���r���h�֥���
void test01(){
	// Ū�J�r��
	char n;
	// �p�⦸��
	int count = 0;
	cout << "�п�J :";
	
	stop: while(cin >> n){
		if(n == '.')
			break;
		else if(n == 'a')
			++count;
		else if(n == 'e')
			++count;
		else if(n == 'i')
			++count;
		else if(n == 'o')
			++count;
		else if(n == 'u')
			++count;
		else
			goto stop;
	}
	
	cout << count << endl;
}

// �s�j�g�@�_�p��i�h
void test02(){
	// input text
	char n;
	// count
	vector<int> result(5,0); 
	// main
	while(cin >> n){
		if(n == '.')
			break;
		else
			switch(n){
				case 'a': case 'A':
					++result[0];break;
				case 'e': case 'E':
					++result[1];break;
				case 'i': case 'I':
					++result[2];break;
				case 'o': case 'O':
					++result[3];break;
				case 'u': case 'U':
					++result[4];break;
			}
	}
	
	cout << "aCount: " << result[0] << endl;
	cout << "eCount: " << result[1] << endl;
	cout << "iCount: " << result[2] << endl;
	cout << "oCount: " << result[3] << endl;
	cout << "uCount: " << result[4] << endl;
}

// ��W�ӵ{�����ק� �i�H�p��ff fi fl
void test03(){
	// input text
	char n;
	// count
	vector<int> result(8,0);
	char before_char = '\0';
	// main
	while(cin >> n){
		if(n == '.')
			break;
		else
			switch(n){
				case 'a': case 'A':
					++result[0];break;
				case 'e': case 'E':
					++result[1];break;
				case 'i': case 'I':
					if((before_char == 'f')||(before_char == 'F'))
						++result[5];
					++result[2];break;
				case 'o': case 'O':
					++result[3];break;
				case 'u': case 'U':
					++result[4];break;
				case 'f': case 'F':
					if((before_char == 'f')||(before_char == 'F'))
						++result[6];
					break;
				case 'l': case 'L':
					if((before_char == 'f')||(before_char == 'F'))
						++result[7];
					break;
			}
		before_char = n;
	}
	
	cout << "aCount: " << result[0] << endl;
	cout << "eCount: " << result[1] << endl;
	cout << "iCount: " << result[2] << endl;
	cout << "oCount: " << result[3] << endl;
	cout << "uCount: " << result[4] << endl;
	cout << "fiCount: " << result[5] << endl;
	cout << "ffCount: " << result[6] << endl;
	cout << "flCount: " << result[7] << endl;
	
}