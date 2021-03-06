#include <iostream>
#include <math.h>
using namespace std;
double f(int x) {
    return cos(sin(x)) - sqrt(3)/2 = 0;
}
double FF(double (*f)(double), double a, double b, double a, double eps) {
    double c;
    while(abs(f(b) - f(a)) > eps) {
       c = (f(b) * a - f(a) * b) / (f(b) - f(a))
		   if ((f(a) * f(c)) > 0) {
			   a = c;
		   }
           else b = c;
    }
    return c;
}
int main() {
    double a,b,eps,x;
    cin >> a;
    cin >> b;
    cin >> eps;
    x = FFt(F,a,b,eps);
    cout << x;
    return 0;
}
