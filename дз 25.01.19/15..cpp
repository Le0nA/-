#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int*a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int mincomp = a[0] * a[5];
	for (int z = 5; z < N - 5; z++) {
		for (int i = 0; i < N - 5; i++) {
			if (i + z >= N) {
				break;
			}
			if (a[i] * a[i + z] < mincomp) {
				mincomp = a[i] * a[i + z];
			}
		}
	}
	cout << mincomp << endl;
	system("pause");
	return 0;
}