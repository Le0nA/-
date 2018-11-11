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
		int n, maxdel = 1;
		
		for (n = 2; n < i; n++) {
			bool Primedel = true;
		for (int nn = 2; nn < n; nn++) {
			if (n % nn == 0) {
				Primedel = false;
			}
		}
			if (i % n == 0 && n > maxdel && Primedel) {
				maxdel = n;
			}
			
		}
	cout << maxdel << " ";
	}
	return 0;
}