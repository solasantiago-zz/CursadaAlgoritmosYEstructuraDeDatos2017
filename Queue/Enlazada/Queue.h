#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

struct Node {
	int Value;
	Node *Next = nullptr;
};
	
struct Queue {
	Node *FirstNode= nullptr;
};

void Enqueue (Queue &, int);
bool Dequeue (Queue &, int &);

#endif
