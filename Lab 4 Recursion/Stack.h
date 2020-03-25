#ifndef Stack_h
#define Stack_h

using namespace std;
typedef int ItemType;

struct node //Defines nodes.
{
	ItemType item;
	node* next;
};

class Stack
{
public:
	Stack(); //Constructor
	~Stack(); //Deconstructor
	bool IsEmpty(); //Checks if the stack is empty.
	bool IsFull(); //Checks if the stack is full.
	void Push(ItemType item); //Adds a new item to the top of the stack.
	void Pop(); //Removes the top item of the stack.
	ItemType Top(); //Looks at the top item of the stack.
private:
	node* head; //Pointer for the top of the stack.
};

#endif

