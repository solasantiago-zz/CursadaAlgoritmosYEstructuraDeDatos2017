#ifndef STACK_H
#define STACK_H

#include <iostream>

void Push(Stack &, int);
bool Pop (Stack &, int &);

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Stack {
	Node *FirstNode= nullptr;
};

#endif
