#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
void vector_print(vector<int> &);

int main(int argc,char* argv[]){
	
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};//c++11特性
	vector_print(vec);
	cout << endl;
	
	cout << vec.empty() << endl;
	// 最後vector被彈出到裡面為空
	system("pause");
	return 0;
}

void vector_print(vector<int> &v){
	#ifndef NDEBUG
		cout << "vector size : " << v.size() << endl;
	#endif
		if(!v.empty()){
			auto temp = v.back(); // 儲存最後一個元素
			v.pop_back(); // vector彈出最後一個元素
			vector_print(v);
			cout << temp << " ";
		}
	
}