#include <stdio.h>
#define RAJ 100
int main()
{
#ifndef AJAY
    {
        printf("AJAY is not defined\n");
#define AJAY 300
    }
#else
    printf("AJAY is already defined in the program”);

#endif
        return 0;

}
