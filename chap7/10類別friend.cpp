#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
/*
	將class宣告為友元
*/
class Screen;

class Window_mgr{
	public :
		using ScreenIndex = vector<Screen>::size_type;
		void clear(vector<Screen>, ScreenIndex);
	private:
		
};

class Screen{
	friend void Window_mgr::clear(vector<Screen>, ScreenIndex);
	public :
		typedef string::size_type pos;
		Screen() = default;
		Screen(pos h, pos w, char c):high(h),width(w),contents(h*w,c){}
		void display(ostream&) const;
	private:
		pos high = 0, width = 0;
		pos cursor = 0;
		string contents;
		vector<Screen> screen = {Screen(24,80,' ')};
		
};

void Window_mgr::clear(vector<Screen> screen,ScreenIndex i){
	Screen& s = screen[i];
	s.contents = string(s.high * s.width , ' ');
}

void Screen::display(ostream& os) const{
	
	os << contents;
}

int main(int argc, char *argv[]){
	
	
	
	system("pause");
	return 0;
}