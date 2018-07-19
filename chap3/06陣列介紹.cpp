#include<iostream>
#include<cstdlib>
#include<string>
#include<cstddef>
#include<vector>
using namespace std;

/*
	�}�C��l��
	
	unsigned cnt = 42;  -> �D�`��
	constexpr unsigned cnd = 42 -> �`��
	
	int arr[10]; �t��10�Ӿ�ƪ��}�C
	int *arr[cnd]; �t��42�Ӿ�ƫ��Ъ��}�C
	string bad[cnt] ����->cnt�ëD�`��
	string good[get_size()] �p�Gget_size()�Oconstexpr�ɥ��T
*/
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
int main(){
	
	test06();
	system("pause");
	return 0;
}

void test01(){
	
	unsigned score[11] = {0};
	unsigned grade = 0;
	while(cin >> grade){
		if(grade <= 100)
			score[grade/10]++;
	}
	
}

// �w�q�@�ӧt��10��int���}�C,�ϸ̭��C�ӭȹ���index
void test02(){
	
	constexpr unsigned array_size = 10;
	unsigned arr[array_size] = {};
	for(size_t index = 0; index < array_size;index++){
		arr[index]+=index;
		cout << arr[index] << " ";
	}
	
	cout << endl;
}

void test03(){
	constexpr unsigned array_size = 10;
	unsigned arr[array_size] = {};
	for(size_t index = 0; index < array_size;index++){
		arr[index]+=index;
	}
	
	vector<int> iv;
	for(decltype(iv.size()) index = 0; index<array_size;index++){
		iv.push_back(arr[index]);
	}
	
	for(auto i: iv){
		cout << i << " ";
	}
	
	cout << endl;
}

// ���w�P�}�C
void test04(){
	int num[] = {1,2,3,4,5};
	auto *p = num;
	auto ptr(num); 
	
	// ���w�]�i�H�ܦ�iterator
	//auto *begin = num;    // �۷��begin()
	//auto *end = &num[5];	// �۷��end()
	// c++ 11 ���s�з�(�t�@�ؼg�k,����w��)
	int *beg = begin(num);
	int *last = end(num);
}

// �g�@�q�{��,�Ϋ��w���Ҧ����ܦ�0
void test05(){
	
	int arr[]={1,2,3,4,5};
	int *p = arr;
	int *last = end(arr);
	
	while(p < last){
		*p = 0;
		p++;
	}
	
	for(int p:arr){
		cout << p << " ";
	}
	
	cout << endl;
}

void test06(){
	
	int arr[] = {1,2,3,4,5};
	int arr2[] = {1,3,3,4,5};
	int *ptr = arr;
	int *ptr2 = arr2;
	auto arrlength = end(arr) - begin(arr);
	auto arr2length = end(arr2) - begin(arr2);
	
	if(arrlength == arr2length){
		bool answer;
		for(size_t index = 0;index < arr2length;index++,ptr++,ptr2++){
			if(*ptr==*ptr2)
				answer = true;
			else{
				answer = false;
				break;
			}
		}
		
		if(answer)
			cout << "�۵�" << endl;
		else
			cout << "���۵�" << endl;
	}
	else
		cout << "���۵�" << endl;
	
	
}