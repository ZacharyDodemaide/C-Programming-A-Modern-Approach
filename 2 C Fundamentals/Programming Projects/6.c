#include <stdio.h>

int main(void)
{
	int x, answer;

	printf("Enter a value for x: ");
	scanf_s("%d", &x);

	answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("The value for the following polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %d", answer);

	return 0;
}