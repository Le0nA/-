#include <iostream>
#include <stdio.h>
using namespace std;
void sostavnoe(bool prost[], int n) {
	int i, j;
	for (i = 2; i <= n; i++) {
		prost[i] = true;
	}
	for (i = 2; i*i <= n; i++) {
		j = i*i;
		if (prost[i]) {
			while (j <= n) {
				prost[j] = false;
				j += i;
			}
		}
	}
	for (i = 2; i <= n; i++) {
		if (prost[i] == false) {
			cout << i << " ";
		}
	}
}
int main() {
	int n;
	cin >> n;
	bool *prost = new bool[n];
	sostavnoe(prost, n);
	system("pause");
	return 0;
}
