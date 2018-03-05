#ifndef STACK_H
#define STACK_H

#include <iostream>

using std::cout;
using std::endl;

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Stack {
	Node *Top= nullptr;
};

void Push(Stack &, int);
bool Pop (Stack &, int &);

#endif
