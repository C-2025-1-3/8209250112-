#include <iostream>
using namespace std;
int main() {
	int a, b, m,n,k;
	cin >> a >> b;
	m = a;
	n = b;
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
		k = a * b / m;
	}cout << "最大公约数是" << m << endl;
	cout << "最小公倍数是" << k << endl;
	return 0;
}