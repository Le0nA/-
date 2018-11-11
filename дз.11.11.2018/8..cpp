#include <iostream>
using namespace std;
int main() {
	double a;
	double n = 0, nn = 0, nnn = 0, i = 0, ii = 0, iii = 0;
	cin >> a;
	if (a >= 1) {
		for (n = 0; n <= a;  n++) {
			if (n * n < a && a < (n + 1) * (n + 1)) {
				while (n < n + 1) {
					if (n * n < a && a < (n + 0.1) * (n + 0.1)) {
					}
					n += 0.1;
					while (nn < nn + 0.1) {
						if ((n + nn) * (n + nn) < a && a < (n + nn + 0.01) * (n + nn + 0.01)) {
						}
						nn += 0.01;
						while (nnn < nnn + 0.01) {
							if ((n + nn + nnn) * (n + nn + nnn) < a && a < (n + nn + nnn + 0.001) * (n + nn + nnn + 0.001)) {
								cout << n + nn + nnn << " ";
							}
							nnn += 0.001;
						}
					}
				
				}
			}
		}
		for (i = 0; i <= a; i++) {
			if (i * i * i < a && a < (i + 1) * (i + 1) * (i + 1)) {
				while (i < i + 1) {
					if (i * i * i < a && a < (i + 0.1) * (i + 0.1) * (i + 0.1)) {
					}
					i += 0.1;
					while (ii < ii + 0.1) {
						if ((i + ii) * (i + ii) * (i + ii) < a && a < (i + ii + 0.01) * (i + ii + 0.01) * (i + ii + 0.01)) {
						}
						ii += 0.01;
						while (iii < iii + 0.01) {
							if ((i + ii + iii) * (i + ii + iii) * (i + ii + iii) < a && a < (i + ii + iii + 0.001) * (i + ii + iii + 0.001) * (i + ii + iii + 0.001)) {
								cout << i + ii + iii;
							}
							iii += 0.001;
						}
					}

				}
			}
		}
	}
	if (a < 1) {
	    while (n < n + 1) {
			if (n * n >= a && a > (n - 0.1) * (n - 0.1)) {
			}
			n += 0.1;
			while (nn < nn + 0.1) {
				if ((n + nn) * (n + nn) > a && a > (n + nn - 0.01) * (n + nn - 0.01)) {
				}
				nn += 0.01;
				while (nnn < nnn + 0.01) {
					if ((n + nn + nnn) * (n + nn + nnn) > a && a > (n + nn + nnn - 0.001) * (n + nn + nnn - 0.001)) {
						cout << n + nn + nnn << " ";
					}
					nnn += 0.001;
				}
			}
		}
	}
		while (i < i + 1) {
			if (i * i * i >= a && a > (i - 0.1) * (i - 0.1) * (i - 0.1)) {
			}
			i += 0.1;
			while (ii < ii + 0.1) {
				if ((i + ii) * (i + ii) * (i + ii) > a && a > (i + ii - 0.01) * (i + ii - 0.01) * (i + ii - 0.01)) {
				}
				ii += 0.01;
				while (iii < iii + 0.01) {
					if ((i + ii + iii) * (i + ii + iii) * (i + ii + iii) > a && a > (i + ii + iii - 0.001) * (i + ii + iii - 0.001) * (i + ii + iii - 0.001)) {
						cout << i + ii + iii << " ";
					}
					iii += 0.001;
				}
			}
		}
	return 0;
}