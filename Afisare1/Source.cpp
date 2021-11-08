#include <iostream>
using namespace std;
int main()
{
	int a, b[1001], j, i;
	cin >> a;
	for (int i = 1; i <= a; i++)
		cin >> b[i];
		i = 1;
		j = a;
		while (i <= j)
		{
			cout << b[i] << " ";
			if (i != j)
				cout << b[j] << " ";
				i++;
				j--;
		}
		return 0;	

}