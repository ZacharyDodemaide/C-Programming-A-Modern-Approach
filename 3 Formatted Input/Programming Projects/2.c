#include <stdio.h>

int main(void) {

	int item_number, dd, mm, yyyy;
	float unit_price;
	
	printf("\nEnter item number: ");
	scanf_s("%d", &item_number);
	printf("\nEnter unit price: ");
	scanf_s("%f", &unit_price);
	printf("\nEnter purchase date mm/dd/yyyy: ");
	scanf_s("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("Item\t\tUnit\t\tPurchase\n    \t\tPrice\t\tDate\n");
	printf("%-16d$   %-12.2f%d/%d/%d", item_number, unit_price, mm, dd, yyyy);

	return 0;
}