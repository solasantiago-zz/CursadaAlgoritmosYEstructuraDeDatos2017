#include "Queue.h"

using std::cout;
using std::endl;

void Enqueue (Queue &s, int a)
{
	if (s.FirstNode != nullptr)
	{
		Node *aux = s.FirstNode;
		while (aux->Next != nullptr)
			aux = aux->Next;
		aux->Next = new Node;
		aux->Next->Value = a;
	}

	else
	{
		s.FirstNode = new Node;
		s.FirstNode->Value = a;
	}	
}

bool Dequeue (Queue &s, int &a)
{
	if (s.FirstNode != nullptr)
	{
		a = s.FirstNode->Value;
		s.FirstNode = s.FirstNode->Next;
		return true;
	}

	else
		return false;
}
