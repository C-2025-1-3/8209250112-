#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a - b < c) {
		cout << "周长="<<a + b + c << endl;
	}
	else { cout << "不是三角形" << endl; }
	if (a == b || a == c || b == c) {
		cout << "该三角形为等腰三角形" << endl;
	}return 0;
}