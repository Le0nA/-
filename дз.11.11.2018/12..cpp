#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int i;
	while (cin >> i, i != 0) {
		v.push_back(i);
	}
	for (auto i : v) {
		cout << i << " " << i * i;
		cout << endl;
	}
	return 0;
}