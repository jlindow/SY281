#include "add.h"
using namespace std; 
		
//MAIN FUNCTION
int main()
{
	//Get an input
	cout << "How many numbers would you like to sum? "; 
	int num2sum = getInt();
	cout << endl; 

	//Instantiate an object of the add class
	add a(num2sum);
 
	//Get Input
	a.getNums(); 

	//Sum Input
	a.sum(); 
	
	//End of Main
	return 0; 
}

