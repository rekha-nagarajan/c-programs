#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n, i;
	n = 3;
	printf("Number of Elements: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));


	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {


		printf("Memory successfully allocated using calloc.\n");


		for (i = 0; i < n; i++) {
			ptr[i] = i + 1;
		}


		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}


		n = 6;
		printf("\n\nNew size of the array: %d\n", n);


		ptr = realloc(ptr, n * sizeof(int));


		printf("Memory successfully re-allocated using realloc.\n");

		for (i = 3; i < n; ++i) {
			ptr[i] = i + 1;
		}


		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d,", ptr[i],"\n");
		}

		free(ptr);
	}

	return 0;
}
