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
void Pop (Stack &, int &);
void Top (Stack, int &);
void CoutStack (Stack &);

void Push (Stack &s, int a)
{
	s.mystack.at(s.i) = a;
	s.i++;
}

void CoutStack (Stack &s)
{
	if (s.i != 0)
		for (int j = 0 ; j < s.i ; j++)
			cout << s.mystack.at(j) << " ";
	
	else
		cout << "No hay valores en stack";
	cout << endl;
}

void Pop(Stack &s, int &a)
{
	if (s.i != 0)
	{
		s.i--;
		a = s.mystack.at(s.i);
	}
	
	else
		cout << "Empty stack, Pop function cancelled";
}

void Top(Stack s, int &a)
{
	if (s.i != 0)
		a = s.mystack.at(s.i-1);

	else
		cout << "Empty stack, Top function cancelled";
}
