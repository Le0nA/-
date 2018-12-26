#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *Arr1 = new int[n];
    int *Arr2 = new int[n];
    int *Arr3 = new int[n];
    for(int  i = 0; i < n; i++)
    cin >> Arr1[i];
    bool true1;
    Arr2[0] = Arr1[0];
    for(int i = 0; i < n; i++)
    Arr3[i] = 0;
    Arr3[0]++;
    bool true2;
    int k = 0;
    for(int i = 1; i < n; i++) {
        true2 = false;
        for(int j = 0; j < i; j++) {
            if (Arr1[i] == Arr2[j]) {
                Arr3[j]++;
                true2 = true;
            }
            if ((i == j) && (true2 = false)) {
                k++;
                Arr2[k] = Arr1[i];
            }
        }
    }
    int j = 0;
    int max = Arr3[0];
    for(int i = 0; i < n; i++) {
        if (max < Arr3[i]) {
            max = Arr3[i];
            j = i;
        }   
    }
    if (max < (n - (n % 2))/2) {
        true1 = true;
        cout << Arr1[j];
    }
    else cout << "NO";
    return 0;
}
