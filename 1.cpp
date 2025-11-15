 
#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "请输入一个字符";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		ch -= 32;
		cout << "转换后的大写字符:" << ch << endl;
	}
	else {
	int	ch2 =int (ch + 1);
		cout << "后继字符的ASCII码值:" << ch2 << endl;
	}

	return 0;
}



