#include <iostream>
using namespace std;
int main()
{
	unsigned Salto, I;
		cout << "Ingrese la cantidad de veces que quiera imprimir la frase -Algoritmos y estructura de datos-: ";
		cin >> Salto;
	for (I=0;I<Salto;I++)
	{
		cout << I+1 <<"- Algoritmos y estructura de datos\n";
	}
}
