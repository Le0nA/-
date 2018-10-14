#include <iostream>                                          //Напишите программу находящую в массиве сумму элементов делящихся либо
                                                            //на 72 либо на 27(не вместе).
using namespace std;
int main() {
	int n, i, sum = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 27 == 0 && a[i] % 72 != 0) {
			sum += a[i];
		}
		else if (a[i] % 72 == 0 && a[i] % 27 !=0) {
			sum += a[i];
		}
	}
	cout << sum;
    return 0;
}