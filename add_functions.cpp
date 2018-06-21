#include "add.h"

/**************************** Classes *****************************************/
add::add(int num2sum)
{
	count = num2sum; 
	nums = new int[count];
	totalSum = 0; 
}


//Read in numbers from user count number of times
void add::getNums()
{
	int i = 0;

	for(i = 0; i < count; i++)
	{
		cout << "Number " << (i + 1) << ": "; 
		nums[i] = getInt();
		cout << endl; 
	}
}


void add::sum() 
{
	int i = 0;

	for(i = 0; i < count; i++)
	{
		totalSum += nums[i]; 
	}

	cout << "Total Sum: " << totalSum << endl;

}

/************************** Functions *****************************************/
bool validInt(char* input, int& output)
{
	if( (output = strtol(input, 0, 10)) <= 0){
		return false; 
	} else {
		return true;
	} 
}


//Read a char *, validate it as an int, and stick it in integer
int getInt(void)
{
	//local variables
	int value; 
	char* input = new char[2048];
	fgets(input, 2048, stdin); 

	//Validate Input
	while(!validInt(input, value)) 
	{
		cout << "Bad entry. Try again: ";
		fgets(input, 2048, stdin); 
		cout << endl; 
	}

	free(input); 
	return value; 

}

