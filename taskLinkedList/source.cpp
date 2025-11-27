#include "List.h"
#include "List.cpp"
#include <string>
#include <iostream>
using namespace std;



int main() {
	List l1;
	int degL1[3] = { 10,20,30 };
	l1.insertFirst(111, "dina", 1110, degL1);

	int degL2[3] = { 40,50,60};
	l1.insertFirst(112, "manar", 1112, degL2);

	int degL3[3] = { 70,80,90 };
	l1.insertFirst(113, "mohamed", 1113, degL3);

	l1.display();

	return 0;
}