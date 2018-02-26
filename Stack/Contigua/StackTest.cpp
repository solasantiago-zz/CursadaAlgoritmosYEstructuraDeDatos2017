#include "stack.h"

int main ()
{
	int a;
	Stack s;
	
	cout << "< CoutStack para mostrar stack vacio >" << endl;
	CoutStack (s);
	
	//	Funcionamiento de Push
	cout << endl << "< Ingresar 5 valores enteros para pushear al stack >" << endl;
	for (int i = 0 ; i < 5 ; i++)
	{
		cin >> a;
		Push(s, a);
	}
	
	cout << endl << "< CoutStack para mostrar valores ingresados al stack >" << endl;
	CoutStack (s);
	//	Funcionamiento de Top
	cout << endl << "< Uso de la funcion Top >" << endl;
	Top (s, a);
	cout << "Valor retornado: " << a << endl;
	
	//	Funcionamiento de Pop
	cout << endl << "< Uso de la funcion Pop >" << endl;
	for (int i = 0 ; i < 5 ; i++)
	{
		Pop(s, a);
		cout << "Valor retornado: " << a << ". Valores de stack: ";
		CoutStack (s);
	}
}
