#include<iostream>
#include<cstdlib>
void print01();
int main(){
	
	print01();
	return 0;
}

void print01(){
	
	int currVal = 0,val = 0;
	if(std::cin >> currVal){
		int cnt = 1;
		while(std::cin >> val){
			if(val == currVal)
				cnt++;
			else{
				std::cout << currVal << " occurs "
				<< cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs "
				<< cnt << " times" << std::endl;
	}
	system("pause");
}