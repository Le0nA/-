#include <iostream>
using namespace std;
int main() {
	int X, Y;                                                                  //�������� ���������, ��������� ����� ���������
	for (X = 0; 2018 * X <= 78487894; X++) {                                   //2018X + 2019Y = 78487894
		if ((78487894 - 2018 * X) % 2019 == 0) {                               //����������� ���������.� ������������ ��������, ������ ������� - �����������
			Y = (78487894 - 2018 * X) / 2019;
			cout << "X=" << X << " " << "Y=" << Y << " ";                        //������������ ������ X, � � ��� ��� ������ Y, ���������� �������� 
		}                                                                       //�������������� ����� ������� ������
	}
	system("pause");
	return 0;
}                                                                          
		                                                                     

	