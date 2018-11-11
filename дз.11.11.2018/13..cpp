#include <iostream>
using namespace std;
int main() {
	int n = 1, num = 0;
	char *str = new char[n];
	while (cin >> str) {
		n++;
	}
	for (int i = 0; i < n; i++) {
		if (str[i] = str[i + 1]) {
			num++;
			cout << str[i] << num;
		}
	}
	return 0;
}