#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	int n;
	cin >> n;
	int a[n][n];
	int i = 1, j, k, p = n / 2;
	for (k = 1; k <= p; k++) {
		for (j = k - 1; j < n - k + 1; j++) a[k - 1][j] = i++;
		for (j = k; j < n - k + 1; j++) a[j][n - k] = i++;
		for (j = n - k - 1; j >= k - 1; --j) a[n - k][j] = i++;
		for (j = n - k - 1; j >= k; j--) a[j][k - 1] = i++;
	}
	if (n % 2 == 1) a[p][p] = n * n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
		{
			printf(" %4d ", a[i][j]);
			if (j == n - 1) printf("\n");
		}
	}
	return 0;
}