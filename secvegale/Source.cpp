#include <iostream>
using namespace std;
int main() {
	int n, x[1001], secvegale = 0, maxim = 0, primap=0, ultimap=0;
	cin >> n;
	x[0] = 1001;
	x[n + 1] = 1001;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i <= n+1; i++) {
		if (x[i - 1] == x[i]) {
			secvegale++;
		}
		else {
			if (secvegale >= maxim) {
				maxim = secvegale;
				ultimap = i - 1;
				primap = ultimap - maxim;
			}
			secvegale = 0;
		}
	}
	cout << primap << " " << ultimap;
}