#include "access.h"
#include <iostream>
int access::compare()
{
	int index,temp,max;
	for(index=0;index<5;index++)
		if (i[index] > i[index + 1])
		{
			temp = i[index];
			i[index] = i[index + 1];
			i[index + 1] = temp;
		}
	max = i[4];
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