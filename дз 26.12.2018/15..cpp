#include <iostream>
#include <cmath>
using namespace std;
struct point {
	int x;
	int y;
};
int range(point a, point b) {
	int r = ((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y));
	int res = sqrt(r);
	return res;
}
int main() {
	int n;
	int m;
	cout << "Количество точек: ";
	cin >> n;
	point arr[n] = {};
	for (int k = 0; k < n; k++) {
		cin >> arr[k].x;
		cin >> arr[k].y;
	}
	m = range(arr[1], arr[2]);
	for (int i = 0; i < n; i++) {
		cout << arr[i].x, arr[i].y;
		for (int l = 0; l < n; l++) {
			if ((range(arr[i], arr[l]) < m) && ((arr[i].x != arr[l].x))) {
				if (arr[l].y != arr[i].y) {
					m = range(arr[i], arr[l]);
				}
			}
		}
	}
	cout << "min range = " << m;
	return 0;
}