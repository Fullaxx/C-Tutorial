#include <stdio.h>

void type_size_ranges(void);

void pointer_usage(void);

void array_usage(void);
void array_ptr_usage(void);

void struct_usage(void);
void struct_ptr_usage(void);

int main(int argc, char *argv[])
{
	type_size_ranges();

	pointer_usage();

	array_usage();
	array_ptr_usage();

	struct_usage();
	struct_ptr_usage();

	return 0;
}
