#include <iostream>
#include "dinamicstruct.h"

int main() {
    int a;
    List lista;
    List *p = &lista;
    cin >> a;
    do {
        GetNode(p, a);
        PrintNodes(p);
        cin >> a;
    } while (a!=0);
}
