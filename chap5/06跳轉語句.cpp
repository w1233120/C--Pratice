#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
int main(){
	
	test01();
	
	system("pause");
	return 0;
}
// break�y�y
// �g�@�ӵ{��,�ϥ�while�`��Ū����J,�p�G�o�{���ƿ�J�⦸,��X���ƥX�{����r
// �εۿ�X�@�������S������
void test01(){
	//input
	string input;
	//remamber before string
	string before_string;
	
	do{
		cout << "�п�J�@�ӳ�r: ";
		cin >> input;
		if(input == before_string){
			cout << input << " �o�ӳ�r�w�s���J�⦸" <<endl;
			break;
		}else{
			before_string = input;
			cout << "��r�|������" << endl;
		}
	}while(cin);
	
}