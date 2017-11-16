struct Node {
    int val;
    Node * next = nullptr;
};

struct List {
    Node * first = nullptr;
};

void GetNode( List*, int );
void PrintNodes( List* );

using namespace std;


void GetNode( List *lista, int valor ) {
    Node* newnode = new Node;
    Node* pointer = (*lista).first;
    (*newnode).val = valor;
    
    if (pointer != nullptr) {
        if ( valor > (*pointer).val ) {
            while ( valor > (*(*pointer).next).val )
                pointer = (*pointer).next;
            
            (*newnode).next = (*pointer).next;
            (*pointer).next = newnode;
        }
        else {
            (*newnode).next = (*lista).first;
            (*lista).first = newnode;
        }
    }
    else
        (*lista).first = newnode;
}

void PrintNodes( List *lista ) {
    Node* pointer = (*lista).first;
    while ( pointer != nullptr ) {
        cout << (*pointer).val << " -> ";
        pointer = (*pointer).next;
    }
    cout << "GND" << endl;
}
