#include <iostream>                                                     /*�������� ��������� ��������� ����������� ����� ���� ��������� �������
                                                                ��������� ���� �� ����� �� ����� ��� �� 4 ��������(������ � ����� �������
	                                                           ����� ���������, � ������ � ������ - ���).������������� � ������ ���������
	                                                           �� �����������.*/ 
using namespace std;                                        
int main() {                                             
	int n, i, b;                                         
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n;  i++) {
		cin >> a[i];
	}
	int sum = a[0] + a[4];
	for (int i = 0; i < n - 4; i++) {
		for (int b = i + 4; b < n; b++) {
			if (a[i] + a[b] < sum) {
				sum = a[i] + a[b];
			}
		}

	}
	cout << sum;
	return 0;
}