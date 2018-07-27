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
		// �؂�*this��ʽ
		Screen& set(char);
		Screen& set(pos, pos, char);
		// const�����؂�*this
		const Screen& display(ostream& os) const{ do_display(os);return *this; }
		Screen& display(ostream& os){ do_display(os);return *this; }
	private:
		// member
		pos cursor;
		pos high = 0;
		pos width = 0;
		string contents;
		mutable size_t access_ctr; // mutable��ʹ��const������,Ҳ�����޸�value
		void do_display(ostream& os) const{ os << contents; }
};
int main(int argc, char *argv[]){
	
	// overloding
	Screen myscreen(20,10,' '); 
	
	//myscreen.get(); 
	
	//myscreen.get(1,1); 
	
	myscreen.move(1,0).set('#');
	
	// const overloading
	myscreen.set('#').display(cout); // �{��׃���؂���display����
	myscreen.display(cout); // �{�ó����؂���display����
	
	system("pause");
	return 0;
}
// �ѽ���class��������inline
char Screen::get(pos h, pos w) const{
	pos row = h * width;
	return contents[row+w];
}

// ��class�ⲿ����inline
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
