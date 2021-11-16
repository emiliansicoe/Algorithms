#include <iostream>
using namespace std;
int frecventa[1000];
int main() {
	int n, x, nrgasite = 0, primu_nr, al_doilea_nr;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if(x>=100&&x<=999)
			frecventa[x]++;
	}
	for (int i = 999; nrgasite < 2 && i >= 100; --i) {
		if (frecventa[i] == 0) {
			nrgasite++;
			if (nrgasite == 1)
				al_doilea_nr = i;
			else
				primu_nr = i;
		}
	}
	if (nrgasite == 2)
		cout << primu_nr << " " << al_doilea_nr;
	else
		cout << "NU EXISTA";

}