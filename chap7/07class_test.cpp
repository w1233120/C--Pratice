#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Screen{
	public :
		typedef string::size_type pos;
		Screen() = default;
		Screen(pos h, pos w):hight(h),width(w),contents(h * w,' '){}
		Screen(pos h, pos w, char c):hight(h),width(w),contents(h * w,c){}
		const void display(ostream& os) const{ os << contents; }
	private:
		pos hight = 0, width = 0;
		pos cursor = 0;
		string contents;
};
int main(int argc, char *argv[]){
	
	Screen myscreen(10,10,'*');
	myscreen.display(cout);
	
	system("pause");
	return 0;
}