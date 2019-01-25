#include <iostream>
using namespace std;
int main() {
	int maxpr = 1;
	int N;
	cin >> N;
	int*a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int k = 6; k <= N - 6; k++) {
		for (int i = 0; i < N - 6; i++) {
			if (((a[i] % 2 == 0) || (a[i + k] % 2 == 0)) && (a[i] * a[i + k] > maxpr)) {
				maxpr = a[i] * a[i + k];
			}
		}
	}
	if (maxpr == 1) {
		cout << "-1";
	}
	else {
		cout << maxpr;
	}
	system ("pause");
	return 0;
}