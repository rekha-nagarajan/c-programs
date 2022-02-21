#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
struct employee {
	int id;
	char name[10];

};
int main() {
	int i;
	struct employee emp[5];
	printf("Enter Records of 5 Employees");
	for (i = 0; i < 5; i++) {
		printf("\nEnter id:");
		scanf("%d", &emp[i].id);
		printf("\nEnter employee  Name:");
		scanf("%s", &emp[i].name);

	}
	printf("\nEmployee Information List:");
	for (i = 0; i < 5; i++) {
		printf("\nID:%d, Name:%s", emp[i].id, emp[i].name);
	}
	return 0;
}
