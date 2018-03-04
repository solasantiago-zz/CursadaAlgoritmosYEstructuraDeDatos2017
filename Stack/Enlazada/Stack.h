#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Stack {
	Node *FirstNode= nullptr;
};

#endif
