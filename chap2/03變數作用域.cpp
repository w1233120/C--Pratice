#include<iostream>
#include<cstdlib>

int main(){
	
	int i = 100,sum = 0;	// �bmain�禡�����e���s�b
	for(int i = 0; i < 10 ; i++){
		
		sum += i;	// ���O�o�̪�i�bfor�j�鵲���ᤣ�s�b
	}
	
	std::cout << i << " " << sum << std::endl; // �ҥH�o�̪�i��100
	
	system("pause");
	return 0;
}

/*

	output:
	
	100 45
*/