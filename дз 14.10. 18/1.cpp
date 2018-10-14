#include <iostream>                //Напишите программу проверяющую является ли число составным. В
using namespace std;                                  //программе гарантируется, что число - натуральное 
int main() {
	int n, i;
	bool Primenum, nis1 = true;
	cin >> n;
	if (n == 1) {
		Primenum = false;
		nis1 = true;
		cout << "Unit";
	}
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			nis1 = false;
			Primenum = false;
			break;
		}
		}
	if (Primenum) {
		cout << "Prime";
	}
	else if (! Primenum, ! nis1) {
		cout << "Compossible";
	}
	return 0;
}