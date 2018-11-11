#include <iostream>
using namespace std;
struct Date {
	int Day;
	int Month;
	int Year;
};
unsigned int month_len[] =
{
	31,28,31,
	30,31,30,
	31,31,30,
	31,30,31
};
int main() {
	int Day, Month, Year;
	cout << "Day:";
	cin >> Day;
	cout << "Month:";
	cin >> Month;
	cout << "Year:";
	cin >> Year;
	Date d1(int Day, Month, Year);
	int revers(d1) {
		int rev = 0;
		while (n != 0){
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		return rev;
	}
	cout << ((revers(d1) == d1) ? "Palindrom" : "Ne palindrom");
	return 0;
}