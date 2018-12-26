//дискретная задача о рюкзаке - товар нельзя дробить
#include <iostream>
using namespace std;
int main() {
	cout << "Вместительность рюкзака: ";
    int M;
    cin >> M;
	cout << "Кол-во разновидностей товара: ";
	int N;
    cin >> N;
    int *w = new int[N];
    int *v = new int[N];
    for(int i = 0; i < N; i++)
    {
        cout << "вес товара " << i + 1 << ": "; 
		cin >> w[i];
        cout << "стоимость товара " << i + 1 << ": "; 
		cin << v[i];
    }
    int **a = new *int[N]
		for (int i = 0; i < N; i++) {
			a[i] = new int[M];
		}
	for (int i = 0; i < N; i++) {
		a[i][0] = 0;
	}
	for (int i = 0; i < M; i++) {
		a[0][i] = 0;
	}
    for(int i = 1; i < N; i++) {
        for(int j = 1; j < M; i++) {
            if(j < w[j])
            a[i][j] = max(a[i-1][j],a[i-1][j-w[j]] + v[i])
        }
    }
    cout << a[N-1][M-1];
    return 0;
}
