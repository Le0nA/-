#include <iostream>
using namespace std;
int main() {
	long long n, proizv = 1;
	cin >> n;
	if (n % 2 == 0) {
		while (n != 0) {
			if ((n % 10) % 2 == 0) {
				proizv *= n % 10;
						}
		n /= 10;
		}

	}
	else {
		while (n != 0) {
			if ((n % 10) % 2 != 0) {
				proizv *= n % 10;
			}
			n /= 10;
		}
	}
	cout << proizv;
	return 0;
}