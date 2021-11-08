#include <iostream>
using namespace std;
int main() {
	int a, b[1001];
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b[i];
	}
	for (int i = 2; i <= a; i = i + 2) {
		cout << b[i] << " ";
	}
	cout << endl;
	if (a % 2 == 0) {
		a = a - 1;
	}
	for (int i = a; i > 0; i = i - 2) {
		cout << b[i] << " ";
	}
			return 0;
}