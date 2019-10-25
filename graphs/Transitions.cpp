#include <iostream>
#include <vector>
using namespace std;

vector<int>list1, list2;
vector<vector<bool>>am;
vector<vector<bool>>im;
vector<vector<int>>alist;

void list_to_am(int n, int m) {
	am.resize(n);
	for (int i = 0; i < n; i++)am[i].resize(n);
	for (int i = 0; i < m; i++) {
		am[list1[i]][list2[i]] = 1;
		am[list2[i]][list1[i]] = 1;
	}
}

void list_to_alist(int n, int m) {
	alist.resize(n);
	for (int i = 0; i < m; i++) {
		alist[list1[i]].push_back(list2[i]);
		alist[list2[i]].push_back(list1[i]);
	}
}

void list_to_im(int n, int m) {
	im.resize(n);
	for (int i = 0; i < n; i++)im[i].resize(m);
	for (int i = 0; i < m; i++) {
		im[list1[i]][i] = 1;
		im[list2[i]][i] = 1;
	}
}

void am_to_list(int n, int m) {
	list1.resize(m), list2.resize(m);
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (am[i][j]==true) {
				list1[t] = i;
				list2[t] = j;
				t++;
			}
		}
	}
}

void am_to_im(int n, int m) {
	im.resize(n);
	for (int i = 0; i < n; i++) {
		im[i].resize(m);
	}
	int t = 0;
	for (int i = 0; i < n && t < m; i++) {
		for (int j = i; j < n; j++) {
			if (am[i][j]==true) {
				im[i][t] = 1;
				im[j][t] = 1;
				t++;
			}
		}
	}
}

void am_to_alist(int n, int m) {
	alist.resize(n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (am[i][j]) {
				alist[i].push_back(j), alist[j].push_back(i);
			}
		}
	}
}

void im_to_list(int n, int m) {
	list1.resize(m), list2.resize(m);
	int t = 0;
	for (int i = 0; i < m; i++) {
		bool used = false;
		for (int j = 0; j < n; j++) {
			if (im[j][i] && !used) {
				list1[t] = j;
				used = true;
			}
			else if (im[j][i] && used) {
				list2[t] = j;
				t++;
				used = false;
			}
		}
	}
}

void im_to_am(int n, int m) {
	am.resize(n);
	for (int i = 0; i < n; i++) {
		am[i].resize(n);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (im[j][i] == true) {
				for (int t = j + 1; t < n; t++) {
					if (im[t][i]) {
						am[j][t] = true;
						am[t][j] = true;
						j = t;
						break;
					}
				}
			}
		}
	}
}

void im_to_alist(int n, int m) {
	alist.resize(n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (im[j][i] == true) {
				for (int t = j + 1; t < n; t++) {
					if (im[t][i]) {
						alist[j].push_back(t);
						alist[t].push_back(j);
					}
				}
			}
		}
	}
}

void alist_to_am(int n, int m) {
	am.resize(n);
	for (int i = 0; i < n; i++) {
		am[i].resize(n);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < alist[i].size(); j++) {
			am[i][alist[i][j]] = 1;
			am[alist[i][j]][i] = 1;
		}
	}
}

void alist_to_list(int n, int m) {
	list1.resize(m), list2.resize(m);
	alist_to_am(n, m);
	am_to_list(n, m);
}

void alist_to_im(int n, int m) {
	alist_to_am(n, m);
	am_to_im(n, m);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Количество ребер: ";
	cin >> m;
	cout << "Количество вершин: ";
	cin >> n;
	list1.resize(m), list2.resize(m);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		list1.push_back(a - 1), list2.push_back(b - 1);
	}
}
