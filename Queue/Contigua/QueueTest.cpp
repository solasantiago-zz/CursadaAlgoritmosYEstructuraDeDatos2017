#include "Queue.h"
#include <cassert>

//	Pushear los 5 digitos impares. Luego popearlos.

void EnqueueAllDigits (Queue &);

int main ()
{
	int Digit;
	Queue AllDigits;
	assert ( !Dequeue (AllDigits, Digit) );
	EnqueueAllDigits (AllDigits);
	Dequeue(AllDigits, Digit);
	assert ( Digit == 0 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 1 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 2 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 3 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 4 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 5 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 6 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 7 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 8 );
	Dequeue(AllDigits, Digit);
	assert ( Digit == 9 );
	cout << "Test completed successfully";
}

void EnqueueAllDigits (Queue &AllDigits)
{
	for (int i=0; i<10; i++)
	{
		Enqueue(AllDigits, i);
	}
}
