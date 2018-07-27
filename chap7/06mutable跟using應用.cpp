#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
class Screen{
	public :
		using pos = string::size_type;
		//struct
		Screen() = default;
		Screen(pos h, pos w, char c):high(h),width(w),contents(h * w, c){}
		//function
		char get() const{return contents[cursor];}
		inline char get(pos h, pos w) const;
		Screen& move(pos r, pos c);
		void some_member() const;
		// 回傳*this函式
		Screen& set(char);
		Screen& set(pos, pos, char);
		// const函數回傳*this
		const Screen& display(ostream& os) const{ do_display(os);return *this; }
		Screen& display(ostream& os){ do_display(os);return *this; }
	private:
		// member
		pos cursor;
		pos high = 0;
		pos width = 0;
		string contents;
		mutable size_t access_ctr; // mutable即使在const函數內,也可以修改value
		void do_display(ostream& os) const{ os << contents; }
};
int main(int argc, char *argv[]){
	
	// overloding
	Screen myscreen(20,10,' '); 
	
	//myscreen.get(); 
	
	//myscreen.get(1,1); 
	
	myscreen.move(1,0).set('#');
	
	// const overloading
	myscreen.set('#').display(cout); // 調用變數回傳的display函數
	myscreen.display(cout); // 調用常數回傳的display函數
	
	system("pause");
	return 0;
}
// 已經在class內中宣告inline
char Screen::get(pos h, pos w) const{
	pos row = h * width;
	return contents[row+w];
}

// 在class外部宣告inline
inline Screen& Screen::move(pos r, pos c){
	pos row = r * width;
	cursor = row + c;
	return *this;
}

void Screen::some_member() const{
	++access_ctr;
}

inline Screen& Screen::set(char c){
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos r, pos col, char c){
	contents[r * width + col] = c;
	return *this;
}
