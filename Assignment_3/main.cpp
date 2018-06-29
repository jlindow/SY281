#include "classes.h"
using namespace std; 
//add2Back and addInOrder do not work


int main()
{
	linkedList list; 

	list.add2Front(5);
	list.add2Front(7);
	list.add2Front(8);
	/*list.add2Back(9);
	list.addInOrder(17);
	list.addInOrder(2000);
	list.addInOrder(-1);
	list.addInOrder(6);
	list.addInOrder(2020);
	*/list.isIn(5);
	list.isIn(7);
	list.printAll();

	return 0; 
}

