#include "classes.h"
using namespace std; 
//add2Back and addInOrder do not work


int main()
{
	linkedList list; 

	list.add2Front(5);
	list.add2Front(7);
	list.add2Front(8);
	list.addInOrder(6, list.head);
	list.isIn(6, list.head); 
	list.isIn(5, list.head);
	list.isIn(7, list.head);
	list.isIn(12, list.head);	
	list.printAll(list.head);

	return 0; 
}

