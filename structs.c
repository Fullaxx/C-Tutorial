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
	myblock.c = 8;
	myblock.s = 16;
	myblock.i = 32;
	myblock.l = 64;

	printf("myblock.a  = %d; myblock.b  = %d;\n", myblock.a, myblock.b);
}

void struct_ptr_usage(void)
{
	// Allocate a pointer on the heap that will point to our struct
	struct blocks *myblock;

	// Allocate a block of heap memory for our struct
	myblock = (struct blocks *)calloc(1, sizeof(struct blocks));

	// Assign our values
	myblock->c = 8;
	myblock->s = 16;
	myblock->i = 32;
	myblock->l = 64;

	printf("myblock->a = %d; myblock->b = %d;\n", myblock->a, myblock->b);
	free(myblock);

	printf("\n");
}
