#include <iostream>
#include <fstream>
using namespace std;
int frecventa[100];
ifstream  f("unice.in");
ofstream d("unice.out");
int main(){
	int n, x;
	f >> n;
	for (int i = 1; i <= n; i++) {
		f >> x;
		frecventa[x]++;
	}
	for (int i = 0; i < 100; i++) {
		if (frecventa[i] == 1)
			d << i << " ";
	}
	return 0;
}
