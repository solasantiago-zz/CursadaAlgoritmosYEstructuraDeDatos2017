#include "Stack.h"

void Push (Stack &s, int a)
{
	Node *input = new Node;
	input->Value = a;
	input->Next = s.Top;
	s.Top = input;
}

bool Pop (Stack &s, int &a)
{
	if (s.Top != nullptr)
	{
		a = s.Top->Value;
		s.Top = s.Top->Next;
		return true;
	}
	
	else
		return false;
}
