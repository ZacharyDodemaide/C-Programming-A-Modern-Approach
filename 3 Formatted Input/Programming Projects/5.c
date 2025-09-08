#include <stdio.h>

int main(void) {
	int input1, input2, input3, input4, input5, input6, input7, input8, input9, input10, input11, input12, input13, input14, input15, input16;
	
	printf("Enter the numbers from 1 to 16 in any order : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &input1, &input2, &input3, &input4, &input5, &input6, &input7, &input8, &input9, &input10, &input11, &input12, &input13, &input14, &input15, &input16);
	
	printf("\n%2d %2d %2d %2d", input1, input2, input3, input4);
	printf("\n%2d %2d %2d %2d", input5, input6, input7, input8);
	printf("\n%2d %2d %2d %2d", input9, input10, input11, input12);
	printf("\n%2d %2d %2d %2d\n", input13, input14, input15, input16);

	printf("\nRow sums: %d %d %d %d",input1 + input2 + input3 + input4
									,input5 + input6 + input7 + input8
									,input9 + input10 + input11 + input12
									,input13 + input14 + input15 + input16);
	printf("\nColumn sums: %d %d %d %d",input1 + input5 + input9 + input13
									   ,input2 + input6 + input10 + input14
									   ,input3 + input7 + input11 + input15
									   ,input4 + input8 + input12 + input16);
	printf("\nDiagonal sums: %d %d",input1 + input6 + input11 + input16
								   ,input13 + input10 + input7 + input4);

	return 0;
}