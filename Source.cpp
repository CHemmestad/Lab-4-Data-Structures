#include <iostream>
#include "Stack.h"

using namespace std;

//RECURSION EXAMPLE FOR REFERENCE	!!!!
int fibinocci(int x) {
	if (x == 0) {
		return 0;
	}
	return fibinocci(x - 1) + x;
}

int main() {
	/*
	GOAL :
	Reverse order of the stack with recursion
	*/

	Stack stack;

	cout << "Pushing" << endl;
	stack.push(5);
	cout << "Pushing" << endl;
	stack.push(10);
	cout << "Pushing" << endl;
	stack.push(2);
	cout << "Pushing" << endl;
	stack.push(98);

	//RECURSION EXAMPLE FOR REFERENCE	!!!!!
	cout << fibinocci(25) << endl; 

	stack.push(stack.reverse(stack.getTop()));

	cout << stack.getTop() << endl;
	/*
	cout << "Should be 98" << endl;
	cout << stack.getTop() << endl;

	cout << "Popping" << endl;
	stack.pop();
	cout << "Popping" << endl;
	stack.pop();

	cout << "Should be 10" << endl;
	cout << stack.getTop() << endl;

	cout << "Pushing" << endl;
	stack.push(8);

	cout << "Should be 8" << endl;
	cout << stack.getTop() << endl;

	cout << "Popping" << endl;
	stack.pop();
	cout << "Popping" << endl;
	stack.pop();

	cout << "Should be 5" << endl;
	cout << stack.getTop() << endl;

	cout << "Popping" << endl;
	stack.pop();

	cout << "Should be empty" << endl;
	cout << stack.getTop() << endl;

	cout << "Popping" << endl;
	stack.pop();

	cout << "Should be empty" << endl;
	cout << stack.getTop() << endl;
	*/

	cout << "Deconstructing" << endl;
	stack.~Stack();

	return 0;
}