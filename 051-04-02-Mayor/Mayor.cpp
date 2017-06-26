#include <iostream>
using namespace std;
int main ()
{
	int a, b;
	cin >> a >> b;
	if (a>b)
		cout << a;
	else if (a<b)
		cout << b;
	else
	{
		cout << "Los valores ingresados son iguales, reintentar.\n";
		return main();
	}
}
