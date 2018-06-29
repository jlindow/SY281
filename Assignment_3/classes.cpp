#include "classes.h"
using namespace std;


linkedList::linkedList(void)
{
	head = NULL;
	tail = NULL;
}

void linkedList::printAll(void)
{
	node* tmp = new node(0); 
	tmp = head; 
	while(tmp->nextNode != NULL)
	{
		cout << tmp->data << endl; 
		tmp = tmp->nextNode; 
	}
		
	cout << tmp->data << endl; //last node (nextNode is NULL for last in list); 
 

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

bool linkedList::isIn(int value)
{
	node* tmp = new node(value); 
	tmp = head; 
	while(tmp->nextNode != NULL) 
	{
		if(tmp->data == value)
		{
			cout << "Value in list" << endl; 
			return true; 
		}

		tmp = tmp->nextNode;
	}


	//Check last node
	if(tmp->data == value) {
		cout << "Value in list" << endl; 
		return true; 
	} else {
		cout << "Value not in list" << endl; 
		return false; 
	}
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

