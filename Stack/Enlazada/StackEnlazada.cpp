#include "Stack.h"

using std::cout;
using std::cin;
using std::endl;

void Push (Stack &s, int a)
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

bool Pop (Stack &s, int &a)
{
	if (s.FirstNode != nullptr)
	{
		if (s.FirstNode->Next != nullptr)
		{
			Node *aux = s.FirstNode;
			while (aux->Next->Next != nullptr)
				aux = aux->Next;
			a = aux->Next->Value;
			aux->Next = nullptr;
		}
		
		else
		{
			a = s.FirstNode->Value;
			s.FirstNode = nullptr;
		}
		
		return true;
	}

	else
		return false;
}
