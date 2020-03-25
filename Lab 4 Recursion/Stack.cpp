#include "Stack.h"
#include <iostream>
#include <new>

Stack::Stack() //Defines pointer "head"
{
	head = nullptr;
}

Stack::~Stack()
{
	while (IsEmpty() != true) //Repetedly pops the top node until there are none left.
	{
		Pop();
	}
}

bool Stack::IsEmpty() /*Checks if there is currently a head on the stack. If there is not, then
					  if there is not, then the stack is empty.*/
{
	if (head == nullptr)
		return true;
	else
		return false;
}

bool Stack::IsFull() //Checks if there is still available memory.
{
	node* location;
	try
	{
		location = new node;
		delete location;
		return false;
	}
	catch (bad_alloc exception)
	{
		return true;
	}

}

void Stack::Push(ItemType item) //Places a new item onto the top of the stack.
{
	node* location;
	if (IsFull() == false)
	{
		location = new node;
		location->item = item;
		location->next = head;
		head = location;
	}
}

void Stack::Pop() //Removes the top item of the stack.
{
	node* tempLoc;
	tempLoc = head;
	head = head->next;
	delete tempLoc;
}

ItemType Stack::Top() //Looks at the top item of the stack.
{
	if (IsEmpty() != true)
	{
		return head->item;
	}
	return NULL;
}
