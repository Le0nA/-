#include <iostream>
using namespace std;
int main() {
	double a, e = 1e-15;
	cout << "a:";
	cin >> a;
	double y, x, x1 = 0, x2 = a;
	while (true) {
		x = (x2 + x1) / 2;
		y = pow(x, 2);
		if (fabs(y - a) > e)
			if (y - a > 0) x2 = x;
			else x1 = x;
		else break;
	}
	printf("%.10lf\n", x);
	system("pause");
	return 0;
}