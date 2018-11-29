#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	a = 6 * n;
	int * arr = new int[n];
	for (int i = 0; i < a; i++) {
		arr[i] = 0;
	}
	for (int i = 2; i < a; i++) {
		if (arr[i] == 0) {
			for (int j = i * 2; j < a; j += i) {
				if (arr[j] == 0) {
					arr[j] = 1;
				}
				if ((arr[j] == 0) && (j % (i*i) == 0)) {
					arr[j] = 2;
				}
				if ((arr[j] == 0) && (j % (i*i*i) == 0)) {
					arr[j] = 3;
				}
				if (arr[j] == 1) {
					arr[j] = 2;
				}
				if ((arr[j] == 1) && (j % (i*i) == 0)) {
					arr[j] = 3;
				}
				if (arr[j] == 2) {
					arr[j] = 3;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			if ((arr[i + 2] == 0) || (arr[i + 2] == 2)) {
				cout << " " << i << endl;
			}
		}
	}
	system("pause");
	return 0;
}