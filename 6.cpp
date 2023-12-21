//reviewed
#include<stdio.h>
int main()
{
	int a;
	char * x;
	x = (char *) &a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}

// in this program, x[0] = 1 adds a with 1 and 512 + 1 = 513 was showed in output. 
// if we use x[0] = 10 , the result will be 512 + 10 = 522, 


