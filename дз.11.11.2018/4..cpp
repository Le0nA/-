#include <iostream>                                         //нада 0 в конце
#include <vector>
using namespace std;                                     
int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> v;
	int i, sum = 0;
	while (cin >> i, i != 0) {
		v.push_back(i);
	}
	for (auto &i : v) {
		int n;
		bool Primenum, iis1 = true;
		if (i == 1) {
			Primenum = false;
			iis1 = true;
		}
		for (n = 2; n <= sqrt(i); n++) {
			if (i % n == 0) {
				iis1 = false;
				Primenum = false;
				break;
			}
			else {
				Primenum = true;
			}
			}
		if (Primenum, iis1) {
				sum += i;
        }        
	}
	 
	cout << sum;
	return 0;
	
}