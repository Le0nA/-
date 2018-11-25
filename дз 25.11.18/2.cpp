#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (long long int a = pow(10, n); a < pow(10, n + 1); a++) {
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			int k = pow(10, n);
			arr[i] = a % k;
			n--;
		}
		for (int i = 0; i < n; i++) {
		    int j = n - 1;
			int v = 0;
			long long int part1 = 0;
			long long int part2 = 0;
			if (arr[i] == arr[j]) {
				part1 = arr[i] * pow(10, v);
				part2 = arr[j] * pow(10, n);
				j--;
				v++;
				n--;
			}
			else {
				break;
			}
			cout << part1 << part2;
		}
	}
	system("pause");
	return 0;
}