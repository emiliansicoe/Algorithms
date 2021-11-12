#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[501];
    for (int i = 1; i <= n; ++i)
        cin >> x[i];
    bool nrcrescatoare = true;
    for (int i = 2; i <= n; ++i)
        if (x[i] < x[i - 1])
            nrcrescatoare = false;
    if (nrcrescatoare == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}