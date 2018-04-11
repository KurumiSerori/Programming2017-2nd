#include <stdio.h>

int main()
{
	printf("Input a number, the program will decide if the year is leap year.(C version)\n");
	int input;
	scanf("%d", &input);
	if (input % 100 == 0) {
		if (input % 400 == 0) {
			printf("YES!\n");
		}
		else {
			printf("NO!\n");
		}
	}
	else if (input % 4 == 0) {
		printf("YES!\n");
	}
	else {
		printf("NO!\n");
	}
	return 0;
}
