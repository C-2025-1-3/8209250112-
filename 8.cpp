#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, xn, xn1;
	cout << "请输入a的值:";
	cin >> a;
	bool isNegative = false;
	if (a < 0) {
		isNegative = true;
		a = -a;
	}
	xn = a;
	do {
		xn1 = 0.5 * (xn + a / xn);
		if (fabs(xn1 - xn) < 10 - 5) { break; }

		xn = xn1;
	} while (true);
	if (isNegative) {
		xn1 = -xn1;
	}cout << "a的平方根为:" << xn1 << endl;
	return 0;
}
