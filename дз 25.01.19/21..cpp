#include <iostream>
using namespace std;
int main() {
	int N;
	int b;
	int k;
	int max = 0;  
	cin >> N;    
	int* a = new int[10];
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> b;
		while (b != 0) {
			k = b % 10;
			a[k]++;
			b = b / 10;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 9; i >= 0; i--) {
		if (max == a[i]) {
			cout << i << " ";
		}
	}
	return 0;
}
