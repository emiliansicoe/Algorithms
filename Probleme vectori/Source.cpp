#include <iostream>//https://www.pbinfo.ro/probleme/546/afisare0
using namespace std;
int main() {
	int a, b[1001];
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= a; i++){
		if (b[i] % b[a] == 0)
			cout << b[i] << " ";
	}
	return 0;
}