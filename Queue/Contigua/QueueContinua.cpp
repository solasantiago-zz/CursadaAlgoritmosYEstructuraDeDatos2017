#include <array>

using std::array;

struct Queue {
	array <int, 100> myqueue;
	int i=0, j=0;
};

void Enqueue (Queue &, int);
bool Dequeue (Queue &, int &);
