#include <stdio.h>
#include <stdlib.h>

void array_usage(void)
{
	int i;	// for loop iterator variable
	// Allocate an array of shorts (6*2 = 12 bytes)
	short arr[6] = { 4, 8, 15, 16, 23, 42 };

	// Loop over the array and print each value
	printf("array: ");
	for (i=0; i<6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void array_ptr_usage(void)
{
	int i;
	short *arr;
	short *arr_iter;

	// Allocate a block of heap memory for 6 shorts
	arr = (short *) calloc(6, sizeof(short));
	arr[0] = 4;
	arr[1] = 8;
	arr[2] = 15;
	arr[3] = 16;
	arr[4] = 23;
	arr[5] = 42;

	// Loop over the pointer and print each value
	printf("array: ");
	for (i=0; i<6; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Do the same thing assigning a pointer iterator
	// arr_iter will start at the head of the array, can move forward printing values
	arr_iter = arr;
	printf("array: ");
	for (i=0; i<6; i++) {
		printf("%d ", *arr_iter);	// Dereference the pointer
		arr_iter++;					// Increment the pointer
	}
	printf("\n");

	// Free your heap memory
	free(arr);

	printf("\n");
}
