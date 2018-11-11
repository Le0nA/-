#include <iostream> 
using namespace std;

void fill(int** m, int a, int b){
	int n = 1;
	for (int i = 0; i <= a / 2; i++){
		for (int j = i; j < a - i; j++)
		{
			m[i][j] = n;
			m[a - i - 1][j] = n;
			m[j][a - i - 1] = n;
			m[j][i] = n;
		}
		n++;
	}
}

int** createarray2d(int a, int b){
	int** m = new int*[a];
	for (int i = 0; i != a; i++)
		m[i] = new int[b];
	return m;
}

void printMatr(int** m, int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << m[i][j] « " ";
		}
		cout << endl;
	}
}

int main(){
	int** m2d = createarray2d(1, 1);
	fill(m2d, 1, 1);
	printMatr(m2d, 1, 1);
	return 0;
}