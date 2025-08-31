#include <stdio.h>

int main(void)
{
	int dollar_amount, number_of_bills, value_of_bills;

	printf("Enter a dollar amount: ");
	scanf_s("%d", &dollar_amount);

	number_of_bills = dollar_amount / 20;
	dollar_amount = dollar_amount - number_of_bills * 20;
	printf("\n$20 bills: %d", number_of_bills);
	number_of_bills = dollar_amount / 10;
	dollar_amount = dollar_amount - number_of_bills * 10;
	printf("\n$10 bills: %d", number_of_bills);
	number_of_bills = dollar_amount / 5;
	dollar_amount = dollar_amount - number_of_bills * 5;
	printf("\n$5 bills: %d", number_of_bills);
	number_of_bills = dollar_amount / 1;
	dollar_amount = dollar_amount - number_of_bills * 1;
	printf("\n$1 bills: %d", number_of_bills);

	return 0;
}