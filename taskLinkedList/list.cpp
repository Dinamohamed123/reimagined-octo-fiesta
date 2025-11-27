#include "List.h"
#include <string>
#include <iostream>
using namespace std;
List::List() : head(NULL) , cursor(NULL) , prev(NULL)
{
}
bool List::isEmpty()
{
	return head == NULL;
}

bool List::curIsEmpty()
{
	return cursor == NULL;
}

void List::toFirst()
{
	cursor = head;
	prev = NULL;
}

bool List::atFirst()
{
	return cursor == head;
}

void List::Advanced()
{
	prev = cursor;
	cursor = cursor->next;
}

void List::toEnd()
{
	if (!isEmpty())
	{
		while (cursor->next != NULL)
			Advanced();
	}
}

bool List::atEnd()
{
	if (isEmpty()) return true;
	if (cursor->next == NULL) return 1;


}

void List::insertFirst(int i, string Name, int z, int deg[])
{
	node* newnode = new node;
	newnode->id = i;
	newnode->name = Name;
	newnode->zip = z;
	for (int i = 0; i < 3; i++) {
		newnode->degree[i] = deg[i];
	}
	newnode->next = head;
	head = newnode;
	cursor = newnode;
	prev = NULL;

}

void List::display()
{
	node* p;
	p = head;
	if (!isEmpty()) {
		while (p != NULL)
		{
			cout << p->id << endl;
			cout << p->name << endl;
			cout << p->zip << endl;
			for (int i = 0; i < 3; i++) {
				p->degree[i];
			}
		}
	}
}
