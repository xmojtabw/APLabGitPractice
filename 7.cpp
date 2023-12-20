#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr; // 1
	++*p; // 2
	p += 2;
	printf("%d", *p);
	return 0;
}
// output => 3
// NOTICE: if it's supposed to print 4, line 7 must be *p += 2;