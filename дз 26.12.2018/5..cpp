/* ����������� ������ � ������� - ��������� ����� ����� �������*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "���, ������� ������� ������: ";
	int M;
	cin >> M;
	int N;
	cout << "�������������� �������: ";
	cin >> N;
	int *w = new int[N];
	int *v = new int[N];
	double *u = new double[N];
	for (int i = 0; i < N; i++) {
		cout << "����� ������ " << i + 1 << ": "; 
		cin >> w[i];
		cout << "���� ������ " << i + 1 << ": ";
		cin >> v[i];
		u[i] = w[i] / v[i];
	}
	double max = u[0];
	int j = 0;
	for (int i = 1; i < N; i++) {
		if (max < u[i]) {
			max = u[i];
			j = i;
		}
	}
	double W = M / w[j];
	cout << "� ������ ������ ��������� ���������� ������ ��������:  " << W * v[j];
	system("pause");
	return 0;
}
