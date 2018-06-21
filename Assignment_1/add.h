#pragma	once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
 
//Class declaration
class add
{
 
	int count; 
	int totalSum; 
	int *nums;
public: 	
	add(int num2sum);
	void getNums(); 
	void sum(); 
};

//Function Declarations
int getInt(void);
bool validInt(const char* input, int& output);


