#include<stdio.h>

int main() {

    int  var[] = { 10, 100, 1000,10000 };
    int i, * ptr[4];

    for (i = 0; i < 4; i++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < 4; i++) {
        printf("Value of var[%d] = %d\n", i, --*ptr[i]);
    }

    return 0;
}
