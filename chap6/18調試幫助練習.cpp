#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
void vector_print(vector<int> &);

int main(int argc,char* argv[]){
	
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};//c++11�S��
	vector_print(vec);
	cout << endl;
	
	cout << vec.empty() << endl;
	// �̫�vector�Q�u�X��̭�����
	system("pause");
	return 0;
}

void vector_print(vector<int> &v){
	#ifndef NDEBUG
		cout << "vector size : " << v.size() << endl;
	#endif
		if(!v.empty()){
			auto temp = v.back(); // �x�s�̫�@�Ӥ���
			v.pop_back(); // vector�u�X�̫�@�Ӥ���
			vector_print(v);
			cout << temp << " ";
		}
	
}