#include <iostream> 

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			if (i + j < a) {
				cout << j + i + 1 << " ";
			}
			else {
				cout << abs((i - a + 1) + (j - a + 1)) + 1 << " " << endl;
			}
		}
	}
	return 0;
}