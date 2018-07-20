#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;
 /*
	argc -> 代表argv的個數
	argv -> 一個陣列
 */
int main(int argc, char *argv[])//??列表
{
    argc = 5;
	for(int i = 0;i!=argc;i++){
		argv[i] = "a ";
		cout << argv[i] <<endl;
	}
	
	
	
	system("pause");
    return 0;
}
