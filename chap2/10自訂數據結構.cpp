#include<iostream>
#include<cstdlib>
#include<string>
/*
	自定義數據結構

*/
struct Sales_data{
	
	std::string bookNo; // 要用string 要先載入標頭檔string
	unsigned units_sold = 0;  // c++11 新標準可以為結構內成員初始化
	double revenue = 0.0;
};

int main(){
	
	Sales_data data1,data2;
	double price = 0.0;
	// 讀入data1的資料
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	
	data1.revenue = data1.units_sold * price;
	// 讀入data2的資料
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