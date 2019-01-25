#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 0, N;
	cin >> N;
	int*arr = new int[9];   
	for (int i = 0; i < 9; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> a;
		b = a % 9;
		arr[b]++;
	}
	a = arr[0] * (arr[0] - 1) / 2;
	for (int i = 1; i <= 4; i++) {
		a = a + arr[i] * arr[9 - i];
	}
	cout << a;
	return 0;
}
