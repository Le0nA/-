#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> g;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c; // a - вершинная связность, b - реберная связность, с - минимальная степень вершины
	int n = c + 1;
	g.resize(2 * n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				g[i].push_back(j);
				g[i + n].push_back(j + n);
			}
		}
	}
	for (int i = 0, j = n; i < b; i++, j++) {
		if (j > a + n - 1) {
			j -= a;
		}
		g[i].push_back(j);
		g[j].push_back(i);
	}
	for (int i = 0; i < g.size(); i++) {
		for (int j = 0; j < g[i].size(); j++) {
			cout << g[i][j] << endl;
		}
	}
}
