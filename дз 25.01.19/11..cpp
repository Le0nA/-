#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int res = 0;
	int*a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		if ((a[i] > a[i - 1]) && (a[i] < a[i - 1] * 2)) {
			res++;
		}
	}
	cout << res;
	system("pause");
	return 0;
}