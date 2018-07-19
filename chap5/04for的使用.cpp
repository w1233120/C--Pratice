#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
int test01();
void test02();

int main(){
	
	test02();
	system("pause");
	return 0;
}
// for迴圈,兩個vector來表示其中一個vector是不是另一個vector的前綴
int test01(){
	
	// two vector
	vector<int> v1{0,1,1,2};
	vector<int> v2{0,1,1,3,3,5,8};
	// small_size for loop count
	auto small_size = v1.size()<v2.size() ? v1.size():v2.size();
	
	// main
	
	// if v1 != v2
	for(decltype(small_size) index = 0;index < small_size;index++){
		if(v1[index]!=v2[index]){
			cout << "false" << endl;
			return 0;
			
		}
	}
	// if v1 == v2
	cout << "true" << endl;
	return 0;

}

void test02(){
	
	vector<int> v1{1,2,3};
	
	for(auto &it : v1){
		it*=2;
	}
	
	for(auto it: v1){
		cout << it << " ";
	}
	
	cout << endl;
}