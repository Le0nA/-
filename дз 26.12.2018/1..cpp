#include <iostream>
using namespace std;
int main () {
	int n = 0, k;
	cin >> k;
	int*a = new int[n];
	while (cin >> a[n]) {
		n++;
	}
	using std::swap;
	for (int l = 1, r = n; ; ) {
        if (r <= l + 1) {
			// ������� ����� ������� �� 1 ��� 2 ��������� -
			//	 ����� ����� ����� �����
			if (r == l + 1 && a[r] < a[l])
				swap(a[l], a[r]);
			cout << a[k];
		}
		// ������������� a[l], a[l+1], a[r]
		int mid = (l + r) >> 1;
		swap(a[mid], a[l + 1]);
		if (a[l] > a[r])
			swap(a[l], a[r]);
		if (a[l + 1] > a[r])
			swap(a[l + 1], a[r]);
		if (a[l] > a[l + 1])
			swap(a[l], a[l + 1]);

		// ��������� ����������
		// �������� �������� a[l+1], �.�. ������� ����� a[l], a[l+1], a[r]
		int i = l + 1, j = r;
			int cur = a[l + 1];
		for (;;) {
			while (a[++i] < cur);
			while (a[--j] > cur);
			if (i > j)
				break;
			swap(a[i], a[j]);
		}
		// ��������� ������
		a[l + 1] = a[j];
		a[j] = cur;
		// ���������� �������� � ��� �����,
		//	 ������� ������ ��������� ������� �������
		if (j >= k)
			r = j - 1;
		if (j <= k)
			l = i;
	}
	cout << a[k];
	return 0;
	system("pause");
}