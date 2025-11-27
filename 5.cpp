#include <iostream>
using namespace std;
int main() {
	char c;
	int letter = 0, space = 0, digit = 0, other = 0;
	while (cin.get(c)&&c!='\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))letter++;
		else if (c == ' ')space++;
		else if (c >= '0' && c <= '9')digit++;
		else other++;
	}
	cout << "字母：" << letter << "空格：" << space << "数字：" << digit << "其他:" << other << endl;
	return 0;
}