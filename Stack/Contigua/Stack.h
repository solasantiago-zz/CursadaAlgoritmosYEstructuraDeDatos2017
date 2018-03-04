#ifndef STACK_H
#define STACK_H

#include <array>
#include <iostream>

const int N = 100;

using std::array;

struct Stack {
	array <int, N> mystack;
	int i=0;
};

void Push(Stack &, int);
bool Pop (Stack &, int &);

#endif
