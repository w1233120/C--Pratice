#include<iostream>
#include<cstdlib>
#include<string>
/*
	�۩w�q�ƾڵ��c

*/
struct Sales_data{
	
	std::string bookNo; // �n��string �n�����J���Y��string
	unsigned units_sold = 0;  // c++11 �s�зǥi�H�����c��������l��
	double revenue = 0.0;
};

int main(){
	
	Sales_data data1,data2;
	double price = 0.0;
	// Ū�Jdata1�����
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	
	data1.revenue = data1.units_sold * price;
	// Ū�Jdata2�����
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	
	data2.revenue = data2.units_sold * price;
	
	
	if(data1.bookNo == data2.bookNo){
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt << " "
		<< totalRevenue << " ";
		if(totalCnt != 0)
			std::cout << totalRevenue/totalCnt << std::endl;
		else
			std::cout << "(no sales!!)" << std::endl;
		return 0;
	}else{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
	
}