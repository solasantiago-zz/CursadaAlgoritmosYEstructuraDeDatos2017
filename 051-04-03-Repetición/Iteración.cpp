#include <iostream>
using namespace std;
int main() {
	char Frase[300];
	unsigned A,I;
	cout << "Ingrese una frase: ";
	cin.getline(Frase,300);
	cout << "Ingrese la cantidad de veces que quiera imprimir la frase: ";
	cin >> A;
	for(int I=0;I<A;I++)
		cout << I+1 << ": " << Frase << "\n";
}
