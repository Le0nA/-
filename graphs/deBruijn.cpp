#include <iostream> 
#include <set>
#include <cmath>
#include <vector>
using namespace std;

set<string> used;
vector<int> edges;

void dfs(string node, int& k, string& A) {
	for (int i = 0; i < k; ++i) {
		string str = node + A[i];
		if (used.find(str) == used.end()) {
			used.insert(str);
			dfs(str.substr(1), k, A);
			edges.push_back(i);
		}
	}
}

string deBruijn(int n, int k, string A) {
	used.clear();
	edges.clear();

	string firstnode = string(n - 1, A[0]);
	dfs(firstnode, k, A);

	string S;

	int l = pow(k, n);
	for (int i = 0; i < l; ++i)
		S += A[edges[i]];
	S += firstnode;

	return S;
}

int main() {
	int n, k;
	cout << "enter the order";
	cin >> n;
	cout << "enter the size of the alphabet";
	cin >> k;
	string A = "01";
	cout << deBruijn(n, k, A);

	return 0;
}