#include "stdafx.h"
#include <iostream>

/*Author = Dr. Diana Hintea,
		  Student Bogdan A. Stanciu(deletion/removeDuplicates/Deconstructor for list and Node)*/

class Node
{
public:
	int value;
	Node* next;
	Node* prev;
	Node(int val)
	{
		std::cout << "Node constructor!" << std::endl;
		this->value = val;
		this->next = (Node*)0;
		this->prev = (Node*)0;
	}
	~Node()
	{
		std::cout << "Node destructor" << std::endl;
		std::cout << "I had the value " << this->value << std::endl;
		if (next != NULL && prev != NULL)
			delete next;

	}
};
class List
{
public:
	Node* head;
	Node* tail;

	List()
	{
		std::cout << "List Constructor!" << std::endl;
		this->head = 0;
		this->tail = 0;
	}
	~List()
	{
		std::cout << "List destructor!" << std::endl;
		Node* n = this->head;
		while (n)
		{
			Node* x = n->next;
			delete n;
			n = x;
		}

	}
	void insert(Node* n, Node* x)
	{
		if (n != 0)
		{
			x->next = n->next;
			n->next = x;
			x->prev = n;
			if (x->next != 0)
				x->next->prev = x;
		}
		if (this->head == 0)
		{
			this->head = x;
			this->tail = x;
			x->prev = 0;
			x->next = 0;
		}
		else if (this->tail == n)
		{
			this->tail = x;
		}
	}

	void RemoveDuplicates() {
		/*removing duplicates from the unsorted list*/
		Node* n = this->head;  //-> n holds current node
		while (n != NULL && n->next != NULL) {
			Node* ncurr = n; 
			while (ncurr->next != NULL) {
				if (ncurr->next->value == n->value) {  // check equality
					ncurr->next = ncurr->next->next;
				}
				else {
					ncurr = ncurr->next;
				}
			}
			n = n->next;
		}
	}

	void Deletion(Node* n)
	{
		if (n->prev != 0)
			n->prev->next = n->next;
		else
			this->head = n->next;
		if (n->next != 0)
			n->next->prev = n->prev;
		else
			this->tail = n->prev;
	}

	void display()
	{
		Node* i = this->head;
		std::cout << "List: ";
		while (i != 0)
		{
			std::cout << i->value << ",";
			i = i->next;
		}
		std::cout << std::endl;
	}
};

int main(int argc, char *argv[])
{
	List* l = new List();
	Node* n = new Node(1);
	l->insert(0, new Node(6));
	l->insert(l->head, n);
	l->insert(l->head, new Node(8));
	l->insert(l->head, new Node(1));
	l->insert(l->head, new Node(6));
	l->insert(l->head, new Node(8));
	l->display();
	l->RemoveDuplicates();
	// l->Deletion(n);
	l->display();
	int a;
	std::cin >> a;
	return 0;
}
