#include <iostream>;
using namespace std;
bool cautarenrprim(int x) {
	bool nrprim = false;
	int divizori = 0;
	for (int i = x; i >= 2; i--){
		if (x % i == 0)
			divizori++;
	}
	if (divizori == 1)
		nrprim = true;
	return nrprim;
}

int main() {
	int n, x[201], y[201];
	cin >> n;
	for (int i = n; i >=1; i--) {
		cin >> x[i];
		if (cautarenrprim(x[i]) == true) {
			y[i] = x[i];
			cout << y[i] << " ";
		}
	}
	return 0;
}