//reviewd
#include <iostream>
#include<stdio.h>
const char * f(const char **p) {
	auto q = (p + sizeof(char)) [1];
	return q;
}
int main() {
	const char * str[] = { "Wish","You","Best",":D" };
	printf("%c%c ", *f(str), *(f(str) + 1));
	printf("%c%c%c%c\n", **str, *(*(str + 1) + 1), *((str + 2)[-1] + 1), **&*(&str[-1] + 1));
}
//final result: Be WooW
//The f function, gets a array of strings (const char **) and return a const char *
//in f function, the index 1 + 1 = 2 of p (Best) will be returned 
// and in first printf, with format %c will be printed,
//so 'B' and 'e' ('B'+ 1) will print.
//in second printf, 4 chars will be printed 

