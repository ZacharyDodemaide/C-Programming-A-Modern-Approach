#include <stdio.h>

int main(void) {
	int telephone_number_1, telephone_number_2, telephone_number_3;
	
	printf("\nEnter phone number (xxx) xxx-xxxx: ");
	scanf_s("(%d) %d-%d", &telephone_number_1, &telephone_number_2, &telephone_number_3);
	
	printf("\nYou entered: %d.%d.%d", telephone_number_1, telephone_number_2, telephone_number_3);

	return 0;
}