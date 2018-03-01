#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int input=0;
	while (input < 381)
	{
		srand (input);
		input += (rand()%19)+1;
		cout << input << endl;
	}
}
