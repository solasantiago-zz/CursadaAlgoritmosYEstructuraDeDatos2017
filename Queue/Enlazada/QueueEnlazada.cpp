#include "Queue.h"

void Enqueue (Queue &s, int a)
{
	Node *input = new Node;
	input->Value = a;
	if (s.Top != nullptr)
		s.Top->Next = input;
	s.Top = input;
	if (s.Bottom == nullptr)
		s.Bottom = input;
}

bool Dequeue (Queue &s, int &a)
{
	if (s.Bottom != nullptr)
	{
		a = s.Bottom->Value;
		s.Bottom = s.Bottom->Next;
		return true;
	}
		
	else
		return false;
}
