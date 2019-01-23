#include <stdio.h>

void type_size_ranges(void);

void floating_point_ranges(void);
void store_float_as_int(void);
void floating_point_expression(void);
void float_double_test(void);

void pointer_usage(void);

void array_usage(void);
void array_ptr_usage(void);

void struct_usage(void);
void struct_ptr_usage(void);

int main(int argc, char *argv[])
{
	type_size_ranges();

	floating_point_ranges();
	floating_point_expression();
	float_double_test();
	store_float_as_int();

	pointer_usage();

	array_usage();
	array_ptr_usage();

	struct_usage();
	struct_ptr_usage();

	return 0;
}
