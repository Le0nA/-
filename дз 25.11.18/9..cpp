#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v(n * 2);
	v.assign(n * 2, 1);
	for (int i = 2; i < n * 2; i++) {
		if (v[i] == 1) {
			for (int j = i * 2; j < n * 2; j += i) {
				v[j] = 0;
			}
		}
	}
	for (int i = 2; i < n * 2; i++) {
		if ((v[i] == 1) && (v[i * 2 + 1] == 1)) {
			cout << i << " ";
		}
	}
	return 0;
}
