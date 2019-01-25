#include <iostream>
using namespace std;
int main()
{
	int N;
	int D;
	int K;
	int back = 0;
	int chastoback;
	int s;
	cin >> N;
	int* a = new int[100];
	for (int i = 0; i < 100; i++) {        
		a[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> D;
		cin >> K;
		s = K % D;
		a[s]++;
	}
	for (int i = 1; i < 100; i++) {
		if (back <= a[i]) {
			back = a[i];
			chastoback = i;
		}
	}
	if (back == 0) {
		chastoback = 0;
	}
	cout << chastoback;
	return 0;
}
