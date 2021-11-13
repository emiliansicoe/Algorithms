#include <iostream>
using namespace std;
int main() {
	int n, x[1001];
	cin >> n;
	bool palindrom = true;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << x[i];
	}
	cout << endl;
	for (int i = 1; i <= n/2; i++) {
		if (x[i] != x[n - i + 1]){
			palindrom = false; 
			break;
		}
	}
	if (palindrom == true)
		cout << "DA";
	else
		cout << "NU";
	return 0;
}