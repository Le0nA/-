#include <iostream>                                           //�������� ��������� ��������� �������� �� ������ �������. ����� ������
                                                              //�� ������ X � N ����� ����� ����� ����� Y, ��� ������� �� ������� X*Y �� N
                                                             //��������� �������.� ��������� �������������, ��� ��� ����� - �����������
using namespace std;                                           
int main() {                                             
	int X, N;
	cin >> X >> N;
	int Y;
	Y < N * X;
	bool Yexists = true;
	for (Y = 2; Y < (N * X); Y++) {
		if ((((X * Y) % N) == 1)) {
			Yexists = true;
			break;
		}
	}
	if (Yexists) { 
		cout << Y;
		}
	else {
		cout << "None";
	}
	return 0;
}