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
			// текущая часть состоит из 1 или 2 элементов -
			//	 легко можем найти ответ
			if (r == l + 1 && a[r] < a[l])
				swap(a[l], a[r]);
			cout << a[k];
		}
		// упорядочиваем a[l], a[l+1], a[r]
		int mid = (l + r) >> 1;
		swap(a[mid], a[l + 1]);
		if (a[l] > a[r])
			swap(a[l], a[r]);
		if (a[l + 1] > a[r])
			swap(a[l + 1], a[r]);
		if (a[l] > a[l + 1])
			swap(a[l], a[l + 1]);

		// выполняем разделение
		// барьером является a[l+1], т.е. медиана среди a[l], a[l+1], a[r]
		int i = l + 1, j = r;
			int cur = a[l + 1];
		for (;;) {
			while (a[++i] < cur);
			while (a[--j] > cur);
			if (i > j)
				break;
			swap(a[i], a[j]);
		}
		// вставляем барьер
		a[l + 1] = a[j];
		a[j] = cur;
		// продолжаем работать в той части,
		//	 которая должна содержать искомый элемент
		if (j >= k)
			r = j - 1;
		if (j <= k)
			l = i;
	}
	cout << a[k];
	return 0;
	system("pause");
}