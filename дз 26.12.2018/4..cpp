#include <iostream>
using namespace std;
int main() {
	int x, N;
	cin >> x;
	cin >> N;
	int *a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int *y = new int[N];
	y[0] = a[N - 1];
	for (int i = 1; i < N; i++) {
		y[i] = y[i - 1] * x + a[N - i - 1];
	}
	cout << "f(x) = " << y[N - 1];
	return 0;
}