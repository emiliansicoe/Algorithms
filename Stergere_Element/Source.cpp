#include <iostream>
using namespace std;
int main() {
	int n, p, x[1001];
	cin >> n >> p;
	for (int i = 1; i <= n; i++)
		cin >> x[i];
	for (int i = p + 1; i <= n; i++)
		x[i - 1] = x[i];
	n = n - 1;
	for (int i = 1; i <= n; i++)
		cout << x[i] << " ";
	return 0;
}