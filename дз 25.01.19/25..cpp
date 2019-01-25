#include <iostream> 
using namespace std;
int main() {
	int N;
	cin >> N;
	int num = 0;
	int*a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int k = 4; k <= N - 4; k++) {
		for (int i = 0; i < N - 4; i++) {
			if ((a[i] * a[i + k]) % 38 == 0) {
				num++;
			}
		}
	}
	cout << num;
	system("pause");
	return 0;
}