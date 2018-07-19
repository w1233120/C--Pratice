#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

void test01();
void test02();
int main(){
	
	test02();
	
	system("pause");
	return 0;
}
// 寫出一程式,把數字成績轉換成英文
void test01(){
	
	const vector<string> result = {"F","E","D","C","B","A","A++"};
	int grade = 0;
	
	cout << "請輸入成績: ";
	cin >> grade;
	
	if(grade == 100)
		cout << result[6] << endl;
	else if(grade >= 90)
		cout << result[5] << endl;
	else if(grade >= 80)
		cout << result[4] << endl;
	else if(grade >= 70)
		cout << result[3] << endl;
	else if(grade >= 60)
		cout << result[2] << endl;
	else if(grade >= 50)
		cout << result[1] << endl;
	else
		cout << result[0] << endl;
}

// 改用條件運算元來編寫
void test02(){
	const vector<string> result = {"F","E","D","C","B","A","A++"};
	int grade = 0;

	cout << "請輸入成績: ";
	cin >> grade;
	
	auto finalgrade = (grade==100)?result[6]:(grade>=90)?result[5]:(grade>=80)?result[4]:
						(grade >= 70)?result[3]:(grade>=60)?result[2]:(grade>=50)?result[1]:result[0];
						
	cout << finalgrade << endl;
}