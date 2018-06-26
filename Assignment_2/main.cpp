#include "class.h"
using namespace std; 

int main()
{
	char process_name[100];
	char machine_name[100];
	int process_memory; 
	int machine_memory; 

	cout << "Enter Process Name:  "; 
	cin >> process_name; 

	cout << endl << "Enter Process Memory:  ";
	cin >> process_memory; 

	cout << endl << "Enter Machine Name: "; 
	cin >> machine_name; 

	cout << endl << "Enter Machine Memory: ";
	cin >> machine_memory; 

	process p(process_name, process_memory); 
	machine m(machine_name, machine_memory); 

	p.pprint(); 
	m.addProcess(p); 
	m.addProcess(p); 
	m.memCheck(p); 
	m.mprint(); 

	return 0; 
}

