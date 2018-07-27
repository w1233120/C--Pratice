#include<iostream>
#include<cstdlib>
using namespace std;


 
class Y; // 被宣告過就可以建立引用或指針
class X{
	
	Y *ptr = NULL;
	//Y y; 但是要被定義才能建立物件;
	
};

class Y{
	
	X x;
};
int main(){
	
	
	
	system("pause");
	return 0;
}