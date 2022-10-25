#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Define a struct
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
}

static struct blocks s(struct blocks x)
{
	struct blocks r = x;
	return r;
}

void returning_a_struct(void)
{
	struct blocks x = { CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX };
	struct blocks y = s(x);
	printf("y.c = %d; y.s = %d; y.i = %d; y.l = %ld;\n", y.c, y.s, y.i, y.l);

	printf("\n");
}
