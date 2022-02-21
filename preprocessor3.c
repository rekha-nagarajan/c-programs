#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)
#define l 50
#define b 100


int main()
{
#undef l
#undef b
#define l 5
#define b 10

	printf("Area of rectangle is: %d", AREA(l, b));

	return 0;
}
