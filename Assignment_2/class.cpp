#include "class.h"
using namespace std; 

process::process(char* name, int memory)
{
	process_name = name; 
	process_memory = memory; 
}

void process::pprint() 
{
	cout << "Process Name: " << process_name << endl; 
	cout << "Process Memory: " << process_memory << endl; 

}

machine::machine(char* name, int memory) 
{
	machine_name = name; 
	machine_memory = memory;
}

void machine::mprint(void)
{
	cout << "Machine: " << machine_name << endl; 
	cout << "Memory:  " << machine_memory << endl; 
	cout << "Processes: " << endl; 
	
	for(int i = 0; i < proc_list.size(); i++)
	{
		cout << proc_list[i] << endl; 
	}
	
}

void machine::addProcess(process p)
{
	proc_list.push_back(p.process_name);
}

void machine::memCheck(process p)
{
	cout << "Memory Available: " << (machine_memory - p.process_memory) << endl; 
}

