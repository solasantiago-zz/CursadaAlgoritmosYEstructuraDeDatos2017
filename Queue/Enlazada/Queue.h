#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

using std::cout;
using std::endl;

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Queue {
	Node *Top= nullptr;
	Node *Bottom= nullptr;
};

void Enqueue (Queue &, int);
bool Dequeue (Queue &, int &);

#endif
