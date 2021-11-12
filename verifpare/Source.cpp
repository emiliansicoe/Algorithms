#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[101];
    for (int i = 1; i <= n; ++i)
        cin >> x[i];
    bool nrpare = true;
    for (int i = 1; i <= n; ++i)
        if (x[i] % 2 == 1)
            nrpare = false;
    if (nrpare == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}