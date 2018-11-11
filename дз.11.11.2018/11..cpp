#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	int x = 0;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 0; i < n - x; i++) {
		if (max <= a[i]) {
			a[i] = max;
			x++;
		}
		for (int j = i + 1; j < n; j++) {
			a[j - 1] = a[j];
			i--;
		}
	}
	int min = a[0];
	for (int i = 0; i < n - x; i++) {
		if (min >= a[i]) {
			a[i] = min;
			x++;
		}
		for (int j = i + 1; j < n; j++) {
			a[j - 1] = a[j];
			i--;
		}
	}
	int *b  = new int[n - x];
	for (int i = 0; i < n - x; i++) {
		b[i] = a[i];
		delete[]b;
	}
	for (int i = 0; i < n - x; i++) {
		cout << a[i];
	}
	return 0;
}