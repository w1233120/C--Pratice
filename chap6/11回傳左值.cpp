#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
// �]�w�@�Ӥ�k�������ܦr�ꤺ���w���r(�^�ǥ���)
char &changechar(string &s,string::size_type index){
	
	return s[index];
	
}

// �^��vector�̭�����
void print_vector(vector<int> v,int index){
	
	if(index > -1){
		cout << v[index--] << " ";
		print_vector(v,index);
	}
}
int main(int argc,char *argv[]){
	
	
	string ss("abc");
	changechar(ss,0) = 'A';
	
	vector<int> v = {1,2,3};
	print_vector(v,v.size()-1);
	cout << endl;
	
	cout << ss << endl;
	
	system("pause");
	return 0;
}