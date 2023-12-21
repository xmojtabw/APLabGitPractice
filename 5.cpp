//reviewed
#include<stdio.h>
int main()
{
    int arr[6] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    return 0;
}

// *ptr1 = 10
// *ptr2 = 60
// first line = 60 - 10 = 50
// second line = 2     cast 50 to char - character with code 50 in ascii table is 2 
