#include<iostream>
#include<cstdlib>
#include<string>

int fact(){
	
	static int count = 0; // this is local staic object
	// �R�A�ܼƦb��k�����ᤣ�|�P��,��ӵ{��������~�|��ۤ@�_�P��
	return ++count;
	
}

int main(){
	// i �������ܼ� for-loop �����N�P��
	for(int i = 0;i < 10;i++){
		
		std::cout << fact() << " " << std::endl;
	}
	
	std::cout << fact() << " " << std::endl;
	
	system("pause");
	return 0;
}