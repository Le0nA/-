#include <iostream> 
#include <string> 
#include <cmath> 
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	int h = 1;
	if (n % 2 == 0) {
		h = pow(10, n / 2 - 1);
		str = to_string(h);
		cout << h;
		for (int i = str.length() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << " ";
		while (h < pow(10, n / 2) - 1) {
			h++;
			str = to_string(h);
			cout << h;
			for (int i = str.length() - 1; i >= 0; i--) {
				cout << str[i];
			}
			cout << endl;
		}
	}
	else {
		h = pow(10, (n / 2));
		str = to_string(h);
		cout << h;
		for (int i = str.length() - 2; i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
		while (h < pow(10, n / 2 + 1) - 1) {
			h++;
			str = to_string(h);
			cout << h;
			for (int i = str.length() - 2; i >= 0; i--) {
				cout << str[i];
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}