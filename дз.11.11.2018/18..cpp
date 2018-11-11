#include <iostream>
#include <cstring>
using namespace std;
bool check_polindrom(string a){
	int len = a.length();
	for (int i = 0; i < len / 2; ++i){
		if (a[i] != a[len - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	string str;
	cin >> str;
	if (check_polindrom(str)){
		cout << "Polindrom";
	}
	else{
		cout << "Not polindrom";
	}
	return 0;
}