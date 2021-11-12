#include <iostream>
using namespace std;
int main()
{
    int n, x[101], numerecifre = 1, i, numarparcifre = 1;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> x[i];
        while (x[i] > 9) {
            numerecifre++;
            x[i] = x[i] / 10;;
        }
        if (numerecifre % 2)
            numarparcifre = 0;
    }
    if (numarparcifre == 0)
        cout << "DA";

    else
        cout << "NU";
    return 0;
}