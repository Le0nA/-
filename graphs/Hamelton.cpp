#include <iostream>
#include <vector>
using namespace std;
void hamilton(int** a, int n) {
	vector <int> v;
	for (int i = 0; i < n; i++) {
		v.push_back(i);
	}
	int k;
	int m;
	for (int i = 0; i < n*n; i++) {
		if (a[v.at(i)][v.at(i + 1)] != 1) {
			k = i + 2;
			while ((a[v.at(i)][v.at(k)] != 1) && (a[v.at(i + 1)][v.at(k + 1)] != 1)) {
				k++;
			}
			for (int j = 0; 2 * j < k - 1 - i; j++) {
				m = v[i + 1 + j];
				v[i + 1 + j] = v[k - j];
				v[k - j] = m;
				j++;
			}
		}
		m = v[i];
		v.push_back(m);
	}

}
int main() {
	int n;
	cin >> n;
	int **a = new int*[n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	hamilton(a, n);
}
