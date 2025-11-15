#include <iostream>
using namespace std;
int main() {
int	day = 1;
int count = 2;
int totalcount = 0;
double cost = 0;
double totalcost = 0;
while (count <= 100) {
	cost = count * 0.8;
	totalcost += cost;
	totalcount += count;
	cout << "第" << day << "天:买" << count << "个，花费" << cost << "元" << endl;
	day++;
	count *= 2;
}cout << "每天平均花费:" << totalcost / (day - 1) << "元" << endl;
return 0;
}