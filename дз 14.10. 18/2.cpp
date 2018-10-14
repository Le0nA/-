#include <iostream>                                           //Напишите программу находящую обратный по модулю элемент. Иначе говоря
                                                              //по числам X и N нужно найти такое число Y, что остаток от деления X*Y на N
                                                             //равняется единице.В программе гарантируется, что все числа - натуральные
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