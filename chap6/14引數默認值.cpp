#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
	ま计纐粄
	
	1. ま计倒ぉ纐粄,琌ぇま计场常璶倒ぉ纐粄
	
	2. 碞衡ま计倒ぉ纐粄,琌临琌︽倒ぉ把计
	
*/
// ㄧ计,ㄓ耞琌狡计,狦琌杠s肚
string make_plural(size_t ctr,const string &word,const string &ending = "s"){
	
	
	return (ctr>1)? word+ending : word;
}
int main(){
	
	string s1 = "success",s2 = "failure";
	
	cout << "success狡计 : " << make_plural(2,s1,"es") << endl;
	cout << "success虫计 : " << make_plural(1,s1) << endl;
	cout << "failure狡计 : " << make_plural(2,s2) << endl;
	cout << "success虫计 : " << make_plural(1,s2) << endl;
	
	system("pause");
	return 0;
}