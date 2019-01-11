#include <stdio.h>
#include <stdlib.h>

// Define a struct of 2 ints
struct blocks {
	char c;
	short s;
	int i;
	long l;
};

void struct_usage(void)
{
	// Allocate memory on the stack for myblock
	struct blocks myblock;

	// Assign our values
	myblock.c = 'C';
	myblock.s = 16;
	myblock.i = 32;
	myblock.l = 64;

	printf("myblock.c  = %c; myblock.s  = %d; myblock.i  = %d; myblock.l  = %ld;", myblock.c, myblock.s, myblock.i, myblock.l);
	printf("\n");
}

void struct_ptr_usage(void)
{
	// Allocate a pointer on the heap that will point to our struct
	struct blocks *myblock;

	// Allocate a block of heap memory for our struct
	myblock = (struct blocks *)calloc(1, sizeof(struct blocks));

	// Assign our values
	myblock->c = 'C';
	myblock->s = 16;
	myblock->i = 32;
	myblock->l = 64;

	printf("myblock->c = %c; myblock->s = %d; myblock->i = %d; myblock->l = %ld;", myblock->c, myblock->s, myblock->i, myblock->l);
	printf("\n");
	free(myblock); // Free your heap memory

	printf("\n");
}
