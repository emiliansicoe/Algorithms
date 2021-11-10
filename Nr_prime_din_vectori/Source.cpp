#include <iostream>
using namespace std;
int main() {
	int n, a[1001],divizori=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = 2; j <= a[i]; j++) {
			if (a[i] % j == 0)
				divizori++;
		}
		if (divizori == 1) {
			cout << a[i];
		}
		divizori = 0;
	}
	

	return 0;
}  