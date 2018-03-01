#include "Queue.h"
#include <cstdlib>

//	En la fila de una farmacia, los usuarios de una obra social usan su numero de identificacion
//	para reservar un turno y ser atendidos al otro dia.
//	Ordenar y mostrar en pantalla la cola por orden de llegada.

void GeneratePeople(Queue &);

int main () {
	int SocialWork;
	Queue WaitingList;
	GeneratePeople (WaitingList);
	while ( Dequeue(WaitingList, SocialWork) )
		cout << SocialWork << endl;
}

void GeneratePeople (Queue &WaitingList)
{
	int input=1;
	while (input < 400)
	{
		srand (input);
		input += (rand()%30)+1;
		Enqueue (WaitingList, input);
	}
}
