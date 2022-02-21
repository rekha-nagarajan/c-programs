#include<stdio.h>
void main()
{
    int a = 100;
    int* p;
    int** pp;
    p = &a;
    pp = &p;
    printf("Address of a: %u\n", p);
    printf("Address of p: %u\n", pp);
    printf("Value stored at p: %d\n",*p);
    printf("After Increment Value stored at p: %d\n", ++*p);
    printf("After Decrement Value stored at p: %d\n", --*p);
    printf("Value stored at pp: %d\n", **pp);
    printf("After Increment Value stored at pp: %d\n",++**pp);
    printf("After Decrement Value stored at p: %d\n", --**pp);
}
