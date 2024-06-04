#include <stdio.h>
int f(void) { return -1; }
int c;
int main()
{	/// assigning values can be made here, c to the f()
	if((c=f()) == -1)
	{
		printf("...\n");
	}
}