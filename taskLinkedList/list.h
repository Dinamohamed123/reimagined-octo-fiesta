#include <string>
#include <iostream>
using namespace std;

class List
{
    class node
    {
    public:
        int id;
        string name;
        int zip;
        int Size;
        int degree[3];

        node *next;
        node() { next = NULL; };
    };
    node *head, *cursor, *prev;

public:
    List();
    bool isEmpty();
    bool curIsEmpty();
    void toFirst();
    bool atFirst();
    void Advanced();
    void toEnd();
    bool atEnd();
    void insertFirst(int i, string name, int z, int deg[]);
    void display();
};