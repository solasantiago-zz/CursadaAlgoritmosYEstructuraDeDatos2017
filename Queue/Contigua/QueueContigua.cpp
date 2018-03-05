#include "Queue.h"

using std::cout;
using std::endl;

void Enqueue (Queue &s, int a)
{
	if (s.M == N)					// Cola llena
	{
		cout << "Error";
	}

	else if ( s.j == N )		// Esto condiciona a que J empiece a estar por detrás de I
	{
		s.myqueue.at(0) = a;
		s.j = 1;
		s.M++;
	}
	
	else						//	El indicador de inicio está por delante del indicador de final
	{
		s.myqueue.at(s.j) = a;
		s.j++;
		s.M++;
	}
}

bool Dequeue (Queue &s, int &a)
{
	if ( s.M == 0 )
	{
		return false;
	}
	
	else if ( s.i == N )
	{
		a = s.myqueue.at(0);
		s.i = 0;
		s.M--;
		return true;
	}
	
	else
	{
		a = s.myqueue.at(s.i);
		s.i++;
		s.M--;
		return true;
	}
}
