#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;
 /*
	argc -> �N��argv���Ӽ�
	argv -> �@�Ӱ}�C
 */
int main(int argc, char *argv[])//??�C��
{
    argc = 5;
	for(int i = 0;i!=argc;i++){
		argv[i] = "a ";
		cout << argv[i] <<endl;
	}
	
	
	
	system("pause");
    return 0;
}
