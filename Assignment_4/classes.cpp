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

void linkedList::addInOrder(int value, node* ptr) 
{	
	//This seg faults, and I'm not sure why...
	//Likely due to an attempt to access memory pointed to by a pointer = NULL...

	if(ptr->nextNode == NULL || ptr->nextNode->data > ptr->data) {

		//insert a node here
		node* newnode = new node(value);
	      	//newnode goes BEFORE ptr, so the next node is two away from ptr	
		newnode->nextNode = ptr->nextNode->nextNode;
		//need to link newnode to ptr
		ptr->nextNode = newnode; 
		return; 
	} else {
		//otherwise don't insert a node and try again
		ptr = ptr->nextNode; 
		addInOrder(value, ptr);
	}

}

node::node(int value)
{
	data = value;

}

