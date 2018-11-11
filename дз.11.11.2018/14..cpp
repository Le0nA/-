#include <iostream>
using namespace std;
void DECOMPRESSION(char *source, char *dest) {
	for (; *source; source += 2) {
		while ((*source)-- > '0') {
			*dest++ = *(source + 1);
			*dest = '\0';
		}
	}
}
int main() {
	char str;
	cin >> str;
	char str2
	cout <<
}