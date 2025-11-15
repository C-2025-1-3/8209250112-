#include <iostream>
using namespace std;
char c;
int main() {
	int a, b;
	cin >> a >>c>> b;
	if (c == '+') {
		cout << a + b << endl;
	}
	else if (c == '-') {
		cout << a - b << endl;
	}
	else if (c == '*') {
		cout << a * b << endl;
	}
	else if (c == '/') {
		cout << a / b << endl;
	}
	else if (c == '%') {
		cout << a % b << endl;
	}
	 
	return 0;
}