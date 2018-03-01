#include <iostream>

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Stack {
	Node *FirstNode= nullptr;
};


void Push(Stack &, int);
bool Pop (Stack &, int &);
