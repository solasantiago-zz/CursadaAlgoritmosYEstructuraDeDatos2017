#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::cin;
using std::endl;

struct Stack {
	array <int, 10> mystack;
	int i=0;
};

void Push(Stack &, int);
bool Pop (Stack &, int &);

void Push (Stack &s, int a)
{
	s.mystack.at(s.i) = a;
	s.i++;
}

bool Pop (Stack &s, int &a)
{
	if (s.i != 0)
	{
		s.i--;
		a = s.mystack.at(s.i);
		return true;
	}

	else
		return false;
}
