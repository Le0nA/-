#include <iostream>
using namespace std;
int BinSearch(const int* arr, int count, int key);
int main() {
	int n;
	cout << "enter array size: ";
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key1;
	cout << "key1: ";
	cin >> key1;
	int key2;
	cout << "key2: ";
	cin >> key2;
	if (BinSearch(arr, n, key1) != -1 && BinSearch(arr, n, key2) != -1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	system("pause");
	return 0;
}
int BinSearch(const int* arr, int count, int key) {
	int l = 0;            
	int u = count - 1;    
	while (l <= u) {
		int m = (l + u) / 2;
		if (arr[m] == key) return m;
		if (arr[m] < key) l = m + 1;
		if (arr[m] > key) u = m - 1;
	}
	return -1;
}
//Напишите программу позволяющую эффективно проверять принадлежность пары значений массиву. Например, пара (2,3) принадлежит массиву [1,2,3,5,7,11,13,17], а пара (3,4) - нет. Можно считать, что количество запросов многократно превышает размер массива
