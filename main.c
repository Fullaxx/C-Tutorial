#include <stdio.h>

void type_size_ranges(void);

void floating_point_ranges(void);
void store_float_as_int(void);
void retrieve_float_from_int(void);
void floating_point_expression(void);
void float_double_test(void);

void pointer_usage(void);

void array_usage(void);
void array_ptr_usage(void);

void struct_usage(void);
void struct_ptr_usage(void);

void division(void);

int main(int argc, char *argv[])
{
	type_size_ranges();

	floating_point_ranges();
	floating_point_expression();
	float_double_test();
	store_float_as_int();
	retrieve_float_from_int();

	pointer_usage();

	array_usage();
	array_ptr_usage();

	struct_usage();
	struct_ptr_usage();

	division();

	return 0;
}
