#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int i;
	while (cin >> i, i != 0) {
		v.push_back(i);
	}
	for (auto &i : v) {
		int n = 2, num = 0;
		while (n < i) {
			if (i % n == 0) {
				num++;
			}
			n++;
			}
		if (num >= 5) {
				cout << i << " ";
		}
	}
	return 0;
}