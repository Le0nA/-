#include <iostream>
using namespace std;
int main() {
	int n = 1;
	char *str = new char[n];
	while (cin >> str) {
		n++;
	}
	for (int i = 0; i < n; i++) {
			int m = 1;
			char *b = new char[m];
			for (int j = 0; j < m; j++) {
				m++;
			    j++;
			}
			if (str[i] = " ") {
				i--;
				str[i] = b[j];
		}
			delete[]b;
	}
	return 0;
}