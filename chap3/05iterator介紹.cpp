#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;

/*
	iterator
	
	成員方法
		begin
		end
	
	ex:
		auto b = v.begin(),c = v.end();
		
		1. *iter -> 返回iterator的引用的元素
		2. iter->member -> 返回iterator引用元素內的成員
		3. iter++  -> iterator所指元素的下一個元素
		4. iter-- -> iterator所指元素的上一個元素
*/
void test01();
void test02();
void test03();
void teat04();
void test05();
void test06();
void test07();
void test08();
int main(){
	
	test08();
	system("pause");
	return 0;
}
void test01(){
	
	string str("some thing");
	if(str.begin()!=str.end()){
		auto it = str.begin();
		*it = toupper(*it);
	}
	cout << str << endl;
}

void test02(){
	string str("some thing");
	for(auto it = str.begin();it != str.end()&& !isspace(*it);it++){
		*it = toupper(*it);
	}
	
	cout << str << endl;
}
// iterator 類型
void test03(){
	
	vector<int>::iterator it; // 可以讀寫vector<int> 裡的元素;
	string::iterator it2; // 可以讀寫string裡的字元
	
	vector<int>::const_iterator it3; // 只可以讀vector<int>裡的元素
	string::const_iterator it4; // 只可以讀string裡的字元
	
	// const_iterator 跟 const int *ptr 差不多 都是指向常量但是不能改變所指向對象的值
}

void test04(){
	
	vector<int> v;
	const vector<int> cv;
	
	auto it = v.begin();	// auto的類型 vector<int>::iterator
	auto it2 = cv.begin();	// auto的類型 vector<int>::const_iterator
	
	// c++ 11 新標準 如果你只有讀取操作的需求,請使用cbegin跟cend
	
	auto it3 = v.cbegin(); // auto的類型, vector<int>::const_iterator
}

// empty的使用
void test05(){
	
	vector<string> str{"hi","apple","","banana"};
	for(auto it = str.cbegin();it!=str.cend()&&!it->empty();it++){
		cout << *it << endl;
	}
}

// 從cin讀到詞並存進一個vector對象,把所有詞改變成大寫
void test06(){
	
	vector<string> str;
	string n;
	while(cin >> n){
		if(n!="#")
			str.push_back(n);
		else
			break;
	}
	
	for(auto it = str.begin();it!=str.end()&&!it->empty();it++){
		for(auto &c : *it){
			c = toupper(c);
		}
	}
	
	for(auto it = str.cbegin();it!=str.cend()&&!it->empty();it++){
		cout << *it << endl;
	}
	
}

// 創造出一個vector有10元素 然後使用iterator把每個元素乘上兩倍在輸出
void test07(){
	
	vector<int> iv(10,42);
	
	for(auto it = iv.begin();it!=iv.end();it++){
		*it = *it*2;
		cout << *it << " ";
	}
	
	cout << endl;
	
}

// 二分搜尋法
void test08(){
	
	vector<int> iv{2,4,6,8};
	auto beg = iv.begin(),end = iv.end()-1;
	auto mid = iv.begin()+(end-beg-1)/2;
	
	while(end > mid){
		cout << *beg+*end<< endl;
		beg++;
		end--;
	}
	
}