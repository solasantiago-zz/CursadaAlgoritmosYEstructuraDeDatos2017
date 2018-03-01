#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Enqueue (Queue &s, int a)
{
	if ( s.i < s,j and s.j!=100 )	//	El indicador de inicio está por delante del indicador de final
	{
		s.myqueue.at(s.j) = a;
		s.j++;
	}
	
	else if ( s.i-s.j < 0 )
	{
		s.myqueue.at(s.j) = a;
		s.j++;
	}
	
	else if (s.j==100)
	{
		s.myqueue.at(0) = a;
		s.j=1;
	}

	else			//	El indicador de inicio está por delante del indicador de final
	{
		cout << "Error";
	}
}

bool Dequeue (Queue &s, int &a)
{
	if (s.i < s.j)
	{
		a = s.myqueue.at(s.i);
		s.i++;
		return true;
	}

	else if (s.j < s.i and s.i-s.j < 0)
	{
		a = s.myqueue.at(s.i);
		s.i++;
	}
	
	else if (s.i==100)
	{
		s.myqueue.at(0) = a;
		s.i=1;
	}
	else
		return false;
}
