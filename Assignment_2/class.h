#pragma once
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

class process
{
	public: 
		char* 	process_name; 
		int	process_memory;

		process(char* name, int memory); 
		void pprint(void); 	
};

class machine
{
	public:
		char*	machine_name; 
		int	machine_memory; 
		vector <char*> proc_list;

		machine(char* name, int memory); 
		void mprint(void); 
		void addProcess(process p); 
		void memCheck(process p); 	
};


