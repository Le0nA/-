#include <iostream>
using namespace std;
int main() {
	long long n, sum = 0;
	cin >> n;
	while (n != 0) {
		n /= 10;
		if ((n % 10) % 2 != 0) {
			sum += n % 10;
		}
	}
	cout << sum;
	return 0;
}
