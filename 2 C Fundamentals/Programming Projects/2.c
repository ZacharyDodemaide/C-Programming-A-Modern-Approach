#include <stdio.h>
#define int RADIUS = 10;

int main(void)
{
	float sphere_volume, pie = 3.14159f;

	sphere_volume = 4.0f / 3.0f * pie * (RADIUS * RADIUS * RADIUS);

	printf("%f", sphere_volume);

	return 0;
}