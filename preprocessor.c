#include <stdio.h>
#define RESHMA

int main()
{
#ifdef RESHMA
    printf("Rekha is defined\n");
#else
    printf("ReKHA is not defined\n");
#endif
    return 0;
}
