#ifndef QUEUE_H
#define QUEUE_H

#include <array>
#include <iostream>

const int N = 100;

using std::array;

struct Queue {
	array <int, N> myqueue;
	int i=0, j=0, M=0;
};

void Enqueue (Queue &, int);
bool Dequeue (Queue &, int &);

#endif
