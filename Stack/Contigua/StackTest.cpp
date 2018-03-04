#include "Stack.h"
#include "StackContigua.cpp"
#include <cassert>

//	Pushear los 5 digitos impares. Luego popearlos.

void PushOddDigits (Stack &);

int main ()
{
	int Digit;
	Stack OddDigits;
	assert ( !Pop (OddDigits, Digit) );
	PushOddDigits (OddDigits);
	Pop(OddDigits, Digit);
	assert ( Digit == 9 );
	Pop(OddDigits, Digit);
	assert ( Digit == 7 );
	Pop(OddDigits, Digit);
	assert ( Digit == 5 );
	Pop(OddDigits, Digit);
	assert ( Digit == 3 );
	Pop(OddDigits, Digit);
	assert ( Digit == 1 );
	cout << "Test completed successfully";
}

void PushOddDigits (Stack &OddDigits)
{
	for (int i=1; i<10; i=i+2)
	{
		Push(OddDigits, i);
	}
}
