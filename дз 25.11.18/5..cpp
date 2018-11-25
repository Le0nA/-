#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int k;
	cin >> k;
	vector<int> v;
	int i, n = 0, proisv = 1;
	while (cin >> i, i != 0) {
		v.push_back(i);
	}
	for (auto &i : v) {
		while (i >= 0) {
			i /= 10;
			n++;
		}
		while (i >= 0) {
			int p = i / pow(10, (n - 1));
		    n--;
			if (p != 0) {
				proisv *= p;
			}
		    if (proisv >= k) {
			    cout << i;
		    }
		}
	}
	system("pause");
	return 0;
}
