#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string str;
	cin >> str;
	bool nnn = true;
	vector <int> c(6);
	vector <bool> br(1);
	for (int i = 0; i < 6; i++) {
		br[i] = 0;
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') c[0]++;
		else if (str[i] == ')')c[1]++;
		else if (str[i] == '[')c[2]++;
		else if (str[i] == ']')c[3]++;
		else if (str[i] == '{')c[4]++;
		else if (str[i] == '}')c[5]++;
	}
	if (c[1] == c[0] && c[2] == c[3] && c[4] == c[5]) nnn = true;
	else nnn = false;
	if (nnn == true) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				bool mmm = false;
				for (int j = i; j < str.length(); j++) {
					if (str[j] == ')' && (j - i) % 2 == 1 && nnn == true) {
						mmm = true;
						break;
					}
					else mmm = false;
				}
				if (mmm == true)nnn = true;
				else {
					nnn = false;
					break;
				}
			}
			else if (str[i] == '[') {
				bool mmm = false;
				for (int j = i; j < str.length(); j++) {
					if (str[j] == ']' && (j - i) % 2 == 1 && nnn == true) {
						mmm = true;
						break;
					}
					else mmm = false;
				}
				if (mmm == true) nnn = true;
				else {
					nnn = false;
					break;
				}
			}
			else if (str[i] == '{') {
				bool mmm = false;
				for (int j = i; j < str.length(); j++) {
					if (str[j] == '}' && (j - i) % 2 == 1 && nnn == true) {
						mmm = true;
						break;
					}
					else mmm = false;
				}
				if (mmm == true) nnn = true;
				else {
					nnn = false;
					break;
				}
			}
		}
	}
	if (nnn == true)cout << "correct";
	else cout << "incorrect";
	return 0;
}