#include <iostream>
using namespace std;
int frecventa[101];
int main() {
	int n, x,pereche=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		frecventa[x]++;
	}
	for (int i = 1; i <= 100; ++i)
		pereche+= frecventa[i] / 2;
	cout << pereche;
	return 0;
}