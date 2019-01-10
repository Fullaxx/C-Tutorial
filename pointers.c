#include <stdio.h>

void pointer_usage(void)
{
	char small;		//allocate 1 byte of memory
	short medium;	//allocate 2 bytes of memory
	int large;		//allocate 4 bytes of memory
	long super;		//allocate 8 bytes of memory

	// Create pointers that will point to each block of allocated memory above
	char *small_ptr;
	short *medium_ptr;
	int *large_ptr;
	long *super_ptr;

	// Set the values at each memory location
	small = 0xFE;
	medium = 0xBEEF;
	large = 0xDEADBEEF;
	super = 0x0123456789ABCDEF;

	// Assign the pointers
	small_ptr = &small;
	medium_ptr = &medium;
	large_ptr = &large;
	super_ptr = &super;

	// Print the sizes of each pointer
	printf(" *char is %lu bytes\n", sizeof(small_ptr));
	printf("*short is %lu bytes\n", sizeof(medium_ptr));
	printf("  *int is %lu bytes\n", sizeof(large_ptr));
	printf(" *long is %lu bytes\n", sizeof(super_ptr));

	printf("\n");

	// Print the value that each pointer is pointing to
	printf("value at small_ptr: %d\n", *small_ptr);
	printf("value at medium_ptr: %d\n", *medium_ptr);
	printf("value at large_ptr: %d\n", *large_ptr);
	printf("value at super_ptr: %ld\n", *super_ptr);

	printf("\n");
}
