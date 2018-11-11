#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1, str2;
	cout << "S1 = ";
	getline(cin >> s1);
	cout << "S2 = ";
	getline(cin >> s2);
	if (s1.size() == s2.size()){
		bool anagramm = true;
		for (int i = 0; i < s1.size(); i++){
			if (s2.find(s1[i]) != -1)
				s2.erase(s2.find(s1[i]), 1);
			else {
				anagramm = false;
				break;
			}
		}
		if (anagramm) {
			cout << "Yes\n";
		}
		else { 
			cout << "No\n";
	}
	else cout << "No\n";
	return 0;
}