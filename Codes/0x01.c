#include <stdio.h>
void superCoolFunction(void) 
{
	printf("%s\n", __func__);
	/* .. The function name will be printed .. */
}

int main()
{
    superCoolFunction();
    return 0;
}
