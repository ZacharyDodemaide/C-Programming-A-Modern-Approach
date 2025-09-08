#include <stdio.h>

int main(void) {

	int dd, mm, yyyy;
	
	printf("Enter a date mm/dd/yyyy: ");
	scanf_s("%d/%d/%d", &dd, &mm, &yyyy);

	printf("You entered the date: %d%d%d\n", yyyy, mm, dd);
	
	return 0;
}