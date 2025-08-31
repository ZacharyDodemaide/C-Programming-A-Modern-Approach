#include <stdio.h>

int main(void)
{
	int radius;
	float sphere_volume, pie = 3.14159f;

	printf("enter radius of the sphere");
	scanf_s("%d", &radius);

	sphere_volume = 4.0f / 3.0f * pie * (radius * radius * radius);

	printf("%f", sphere_volume);

	return 0;
}