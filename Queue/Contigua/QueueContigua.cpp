#include "Queue.h"

using std::cout;
using std::endl;

void Enqueue (Queue &s, int a)
{
	s.myqueue.at(s.j%N) = a;
	s.j++;
}

bool Dequeue (Queue &s, int &a)
{
	if ( s.i != s.j )
	{
		a = s.myqueue.at(s.i%N);
		s.i++;
		return true;
	}
	
	else
		return false;
}
