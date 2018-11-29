#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector <int> arr(n);
	arr.assign(n, 1);
	for (int i = 2; i < n; i++)
		if (arr[i] == 1) {
			for (int j = i * 2; j < n; j += i) {
				arr[j] = 0;
			}
		}
	int primorial = 1;
	for (int i = 2; i < n; i++) {
		if (arr[i] == 1)primorial *= i;
	}
	cout << primorial;
	system("pause");
	return 0;
}