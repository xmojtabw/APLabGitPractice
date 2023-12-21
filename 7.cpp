//reviewed 
#include<stdio.h>
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	*p++; //instead of ++*p;
	p += 2;
	printf("%d", *p);
	return 0;
}

//the line ++*p has do nothing in fact
//so if we wanna go next of p , can use *p++
//when ++*p exist and not exist , the result is 3 ;
//so we can remove or replace this line 
//if we replace ++*p with *p++ , so we can go one step forth and get 4