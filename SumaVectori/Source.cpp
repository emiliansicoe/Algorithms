#include <iostream>
using namespace std;

bool sumacifrelor(int a, int b) {
    bool aceeasisuma = false;
    int s = 0; 
    int s1 = 0;
    while (a != 0) {
        s = s + a % 10;
        a = a / 10;
    }
    while (b != 0) {
        s1 = s1 + b % 10;
        b = b / 10;
    }
    if (s1 == s)
        aceeasisuma = true;
    return aceeasisuma;
}

int main()
{
    int n, a[201],perechi=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++)
            if (sumacifrelor(a[i], a[j]) ==true) {
                perechi++;
            }
    }
    cout << perechi;
    return 0;
}