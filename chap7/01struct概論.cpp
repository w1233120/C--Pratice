#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
struct Sales_data{

	string bookNO;
	unsigned unit_sold = 0;
	double revenue = 0.0;

	string isbn() const{
		return bookNO;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
};

Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream& , const Sales_data&);
istream &read(istream& , const Sales_data&);
int main(int argc, char *argv[]){
	
	
	return 0;
}

double Sales_data::avg_price() const{
	if(unit_sold)
		return revenue/unit_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data& a){
	
	unit_sold += a.unit_sold;
	revenue += a.revenue;
	
	return *this;
}