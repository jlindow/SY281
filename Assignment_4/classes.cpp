#include "classes.h"
using namespace std;


linkedList::linkedList(void)
{
	head = NULL;
	tail = NULL;
}

void linkedList::printAll(node* ptr) // RECURSIVE
{
	if ( ptr == NULL ) 
	{
		cout << endl; 
		return; 
	}
	cout << ptr->data << endl; 
	ptr = ptr->nextNode; 
	printAll(ptr); //recurse!
}

void linkedList::add2Front(int value)
{
	node* tmp = new node(value); 
	tmp->nextNode = head; 
       	head = tmp; 	
}

void linkedList::add2Back(int value)
{
	node* tmp = new node(value); 
       	tmp->nextNode = NULL; 
	tail = tmp; 	
}

bool linkedList::isIn(int value, node* ptr)
{
	if ( ptr == NULL ) 
	{
		cout << "Value not in list" << endl; 
		return false;
	}

	if ( ptr->data == value ) {
		cout << "Value in list" << endl; 
		return true; 
	} else {
		ptr = ptr->nextNode;
	}
	
	isIn(value, ptr); 

}

void linkedList::addInOrder(int value) 
{
	node* tmp = new node(value); //actual node to insert
	tmp->nextNode = head;
       	node* tmp2 = head; //temp node
	node** tmp3 = &head; //holds insert location of node
		
	while(tmp2->nextNode != NULL && tmp2->data < tmp->data)
	{
		tmp3 = &tmp2->nextNode; 
		tmp2 = tmp->nextNode; 
	}
		
	*tmp3 = tmp;
	tmp->nextNode = tmp2; 
}

node::node(int value)
{
	data = value;

}

