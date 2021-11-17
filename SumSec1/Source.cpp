#include <iostream>
using namespace std;
int main() {
	int n, x[1001], primap=0, ultimap=0, s=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i <= n; i++) {
		if (x[i] % 2 != 0){
			primap = i;
			break;
		}
	}
	for (int i = n; i >= 1; i--) {
		if (x[i] % 2 != 0) {
			ultimap = i;
			break;
		}
	}
	for (int i = primap; i <= ultimap; i++)
		s = s + x[i];
	cout << s;
	return 0;
}