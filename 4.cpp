//reviewed
#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    return 0;
}


// *ptr1 = 12.5
// *ptr2 = 90.5
// result line = 90.5 - 12.5 = 78.0000
// so there is no problem