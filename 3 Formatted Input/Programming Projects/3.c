#include <stdio.h>

int main(void) {
	int gs1, group_identifier, publisher_code, item_number, check_digit;
	
	printf("\nEnter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);
	
	printf("\nGS1 prefix: %d", gs1);
	printf("\nGroup identifier: %d", group_identifier);
	printf("\nPublisher code: %d", publisher_code);
	printf("\nItem number: %d", item_number);
	printf("\nCheck digit: %d", check_digit);

	return 0;
}