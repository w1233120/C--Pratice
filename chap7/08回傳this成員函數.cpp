#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Screen{
	public :
		using pos = string::size_type;
		Screen() = default;
		Screen(pos h, pos w, char c):high(h),width(w), contents(h * w , c){}
		const Screen& display(ostream& os) const{ do_display(os);return *this; }
		Screen& display(ostream& os){ do_display(os);return *this; }
		Screen& set(pos, pos, char);
	private:
		pos high = 0, width = 0;
		pos cursor;
		string contents;
		void do_display(ostream& os) const{
			os << contents;
		}
};

int main(int argc, char*argv[]){
	
	Screen s(5,5,'#');
	s.display(cout).set(0,0,'a').display(cout);
	
	system("pause");
	return 0;
}

Screen& Screen::set(pos h , pos col , char c){
	
	pos row = (h * width)+col;
	contents[row] = c;
	
	return *this;
}