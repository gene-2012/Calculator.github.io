#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	float a,b;
	char c;
	ofstream fout("历史记录.txt");
	while(true){
		cout << "请输入算式(无等号,符号间有空格.很抱歉仅支持两数)：" ;
		cin >> a >> c >> b;
		if(c == '+'){
		cout << a << c << b << '=' << a + b << endl;
		fout << a << c << b << '=' << a + b << endl;
	}else if(c == '-'){
		cout << a << c << b << '=' << a - b << endl;
		fout << a << c << b << '=' << a - b << endl;
	}else if(c == '*' || c == '×'){
		cout << a << " ×" << b << " = " << a * b << endl;
		fout << a << " ×" << b << " = " << a * b << endl;
	}else if(c == '^'){
		cout << a << "的" << b << "次方=" << pow(a,b) << endl;
		fout << a << "^" << b << "=" << pow(a,b) << endl;
	} 
	else{
		cout << a << " ÷"<< b << " = " << a / b << endl;
		fout << a << " ÷"<< b << " = " << a / b << endl;
	}
	}
	fout.close();
	return 0;
} 
