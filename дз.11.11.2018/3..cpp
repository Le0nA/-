#include <iostream>
using namespace std;
int main() {
	int n, k, C = 1;
	cin >> n >> k;
	for (int i = n - k + 1; i <= n; i++) {
		C *= i;
	}
	for (int i = 2; i <= k; i++) {
		C /= i;
	}
	cout << C;
	return 0;
}