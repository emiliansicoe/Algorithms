#include <iostream>
using namespace std;

bool verificarePrimeIntreEle(int a, int b) {
    int nr = min(a, b);
    bool sunt_prime = true;
    for (int i = 2; i <= nr / 2; i++) {
        if (a % i == 0 && b % i == 0) {
            sunt_prime = false;
            break;
        }
    }
    if (a % b == 0 || b % a == 0)
        sunt_prime = false;
    return sunt_prime;
}

int main()
{
    int n, a[201], pereche = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++)
            if (verificarePrimeIntreEle(a[i], a[j]) == true) {
                pereche++;
                //cout << a[i] << " " << a[j] << endl;-Perechile in sine
            }
    }
    cout <<  pereche;
    return 0;
}