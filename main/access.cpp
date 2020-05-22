#include "access.h"
#include <iostream>
int access::compare()
{
	int index;
	for(index=0;index<5;index++)
		if (i[index] > max)
		{
			max = i[index];
		}
	
	return max;
	//return i[4];
}
void access::set()
{
	int in;
	cout << "please enter 4 number" << endl;
	for (in = 0; in < 5; in++)
	{
		cin >> i[in];
	}
}