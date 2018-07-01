#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std; 

class node
{
	public:
 		int 	data; 
		node*	nextNode;  
		node(int value); 	
};

class linkedList
{
	public:
		node* 	head; //pointer to an instance of the node class
		node*	tail; 
		
		linkedList(void); 
		void printAll(node* ptr); 
		void add2Front(int data); 
		void add2Back(int data); 
		bool isIn(int data, node* ptr); 
		void addInOrder(int data, node* ptr); 	
};
