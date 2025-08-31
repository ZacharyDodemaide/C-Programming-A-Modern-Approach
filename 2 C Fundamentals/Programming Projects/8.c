#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment, balance, monthly_interest_rate;

	printf("Enter amount of loan: ");
	scanf_s("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf_s("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf_s("%f", &monthly_payment);

	monthly_interest_rate = (interest_rate * 0.01) / 12;

	balance = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
	printf("\nBalance remaining after first payment: $%.2f", balance);
	balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
	printf("\nBalance remaining after second payment: $%.2f", balance);
	balance = (balance - monthly_payment) + (balance * monthly_interest_rate);
	printf("\nBalance remaining after third payment: $%.2f", balance);

	return 0;
}