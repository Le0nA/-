#include <iostream>
using namespace std;
struct Date {
	int Day;
	int Month;
	int Year;
};
int main () {
	int Day, Month, Year;
	cout << "Day:";
	cin >> Day;
	cout << "Month:";
	cin >> Month;
	cout << "Year:";
	cin >> Year;
	Date d1;
	int a, b, c, R;
	a = (14 - d1.Month) / 12;
	b = d1.Year - a;
	c = d1.Month + 12 * a - 2;
	R = 7000 + (d1.Day + b + b / 4 - b / 100 + b / 400 + (31 * c) / 12);
	return R % 7;
}