#include <array>

using std::array;

struct Stack {
	array <int, 100> mystack;
	int i=0;
};

void Push(Stack &, int);
bool Pop (Stack &, int &);
