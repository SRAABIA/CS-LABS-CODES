#include <iostream>
#include <cstdlib>
#include<vector>

using namespace std;

int main()
{
	int *ptr;
	ptr = (int*) malloc(2*sizeof(int));
	if(ptr==NULL)
	{
		cout <<endl<< "Memory Allocation Failed";
		exit(1);
	}
     cout<<endl<<"size is: "<<sizeof(*ptr);

	/* Initializing memory block */
	cout<<endl<<"After Allocation:";
	for (int i=0; i<sizeof(*ptr); i++)
	{
        ptr[i] = i;
		cout<<endl<<ptr[i];
	}
	ptr = (int*) realloc(ptr, 4*sizeof(int));

    cout<<endl<<"size is: "<<sizeof(*ptr);
	cout<<endl<<"After Reallocation:";
    for (int i=0; i<sizeof(*ptr); i++)
	{   
        ptr[i] = i;
		cout<<endl<<ptr[i];
	}
    delete [] ptr;
    // delete [] new_ptr;

	return 0;
}