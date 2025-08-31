#include <stdio.h>

int main(void)
{
	float dollar_and_cents, tax = 1.05f;

	printf("Enter an amount: ");
	scanf_s("%f", &dollar_and_cents);
	printf("With tax added: $%.2f", dollar_and_cents * tax);

	return 0;
}