/*
 Benjamin Roe
 C++ Fall 2019
 Due 3/13/2020
 Lab 4 Recursion
  Write a program that will reverse the order of a stack.
  For this lab, you will use your stack class and you’re
  not allowed to use any C++ loops. 
*/

#include <iostream>
#include "Stack.h"
using namespace std;

void reverse(Stack& list, Stack& temp);

int main()
{
	Stack list;
	Stack temp;

	list.Push(1);
	cout << list.Top() << endl;
	list.Push(2);
	cout << list.Top() << endl;
	list.Push(3);
	cout << list.Top() << endl;
	list.Push(4);
	cout << list.Top() << endl;
	list.Push(5);
	cout << list.Top() << endl;
	reverse(list, temp);
	return 0;
}

void reverse(Stack&list, Stack&temp)
{
	temp.Push(list.Top());
	list.Pop();
	cout << temp.Top() << endl;
	if(list.IsEmpty() == false)
		reverse(list, temp);
}