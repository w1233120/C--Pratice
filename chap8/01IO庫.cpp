/*
	IO類
	
	istream 類別 -> 提供輸入
	ostream 類別 -> 提供輸出
	cin -> 一個istream物件,輸入讀取數據
	cout -> 一個ostream物件,輸出寫入的數據
	cerr -> 一個ostream物件(通常用於輸出錯誤的訊息)
	getline()函數 -> 直接讀取一行,然後存入一個string的物件裡
	
	1. 標頭檔(這三個類型,都在標準庫內)
	
	iostream 定義標準讀寫的串流
	
	fstream  定義從檔案讀寫的類型
	
	sstream	 定義讀寫string的類型
	
	
	2. io物件是無法賦值的
	
	錯誤範例
	ostream os , os2;
	os = os2;
	ostream print(ostream)
	
	
	3. 一個stream發生錯誤,那這個stream接下來都不能使用
	   所以讀取一個stream是否正確最簡單就是將它當一個條件
	   
	while(cin >> word)
		cout << "讀取操作成功" << endl;
	
	
	4.  IO庫的條件狀態
		a. badbit -> 用來指出stream已崩潰
		b. failbit -> 表示IO操作失敗了
		c. eofbit -> 表示已經到達文件結束
		d. goodbit -> 表示stream目前沒問題
	
	5. 管理條件狀態
	
	auto old_state = cin.rdstate(); -> 儲存當前cin的狀態
	cin.clear(); -> 使cin有效
	process_input(cin) -> 使用cin
	cin.setstate(old_state); -> 恢復cin原本的狀態
	
	6. 管理輸出緩衝
	
		a. 緩衝刷新的原因
			1. 程序正常結束
			2. 緩衝區已滿,需要刷新才能有辦法寫入新的數據
			3. 用endl來明顯的表示刷新緩衝區
			4. 每個輸出操作後,都可以unitbuf來設置stream的內部狀態,來清空緩衝區
				默認情況下,對cerr是設置unitbuf的,所以寫到cerr的內容都是立即刷新
			5. 讀寫相關的stream,相關的stream有會被刷新
		
		b. 刷新輸出緩衝區
			1. cout << "hi" << endl; -> 用endl來刷新,會輸出hi跟換行
			2. cout << "hi" << flush; -> 用flush刷新,輸出hi而已
			3. cout << "hi" << ends; -> 用ends來刷新,會輸出hi跟一個空字符
		
		c. unitbuf操作
			1. cout << unitbuf -> 之後所有輸出操作後都會直接刷新,無緩衝
			2. cout << nounitbuf -> 讓輸出操作回復本來的緩衝機制
*/
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
istream& print(istream&);
int main(int argc, char* argv[]){
	
	print(cin);
	
	system("pause");
	return 0;
}

// 寫一段程式,接受一個istream&參數,回傳值也是istream&
// 遇到文件結束標識就停止,將它讀取的數據印出來,完成後
// 在回傳stream之前,先將stream復位,使其有有效狀態
istream& print(istream& is){
	
	string ss; // 當作文件名
	
	while(is >> ss)
		cout << ss << endl;
	is.clear(); // 使stream變回有效狀態
	
	return is; // 回傳stream
}