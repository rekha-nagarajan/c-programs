#include <stdio.h>
#define a 100
int main()
{
#if (a==100)
    printf("This line will be added , " \
        "a is equal to 100\n");
#else
    printf("This line will be added, " \
        "a is not equal to 100\n");
#endif
    return 0;
}
