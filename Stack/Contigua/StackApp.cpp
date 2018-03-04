#include "Stack.h"
#include "StackContigua.cpp"
#include <cassert>
#include <cstdlib>

//	Se obtienen llaves de distintas aulas en una caja de bedelia, donde:
//	1 - 99		-> Planta baja
//	100 - 199	-> Primer piso
//	200 - 299	-> Segundo piso
//	300 - 399	-> Tercer piso
//	Ordenar las llaves por cajas para que las vuelvan a recojer en cada piso al dia siguiente.

void GenerateKeys(Stack &);
void CheckUpload (Stack &, int);

int main () {
	int Key;
	Stack BeadleshipBox, Floor0, Floor1, Floor2, Floor3;
	GenerateKeys(BeadleshipBox);
	while ( Pop(BeadleshipBox, Key) )
	{
		if (Key>=1 && Key<100)
			Push (Floor0, Key);
		else if	(Key>=100 && Key<200)
			Push (Floor1, Key);
		else if	(Key>=200 && Key<300)
			Push (Floor2, Key);
		else if	(Key>=300 && Key<400)
			Push (Floor3, Key);
	}
	CheckUpload (Floor0, 0);
	CheckUpload (Floor1, 1);
	CheckUpload (Floor2, 2);
	CheckUpload (Floor3, 3);
}

void GenerateKeys(Stack &BeadleshipBox)
{
	int input=1;
	while (input < 380)
	{
		assert ( input < 400 );
		srand (input);
		input += (rand()%19)+1;
		Push (BeadleshipBox, input);
	}
}

void CheckUpload (Stack &Floor, int Check)
{
	int a;
	while (Pop (Floor, a))
		assert ( Check == a/100 );
	cout << "Upload checked successfully" << endl;
}
