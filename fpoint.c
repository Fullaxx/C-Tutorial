// https://www.geeksforgeeks.org/difference-float-double-c-cpp/
// https://github.com/msdeep14

// C program to demonstrate  
// double and float precision values 

#include <stdio.h>
#include <stdint.h>
#include <math.h>

// utility function which calculate roots of
// quadratic equation using double values
void double_solve(double a, double b, double c)
{
	double d = b*b - 4.0*a*c;
	double sd = sqrt(d);
	double r1 = (-b + sd) / (2.0*a);
	double r2 = (-b - sd) / (2.0*a);
	printf("%.5f %.5f\n", r1, r2);
}

// utility function which calculate roots of
// quadratic equation using float values
void float_solve(float a, float b, float c)
{
	float d = b*b - 4.0f*a*c;
	float sd = sqrtf(d);
	float r1 = (-b + sd) / (2.0f*a);
	float r2 = (-b - sd) / (2.0f*a);
	printf("%.5f %.5f\n", r1, r2);
}

// driver program
void float_double_test(void)
{
	float fa = 1.0f;
	float fb = -4.0000000f;
	float fc = 3.9999999f;
	double da = 1.0;
	double db = -4.0000000;
	double dc = 3.9999999;

	printf("roots of equation x2 - 4.0000000 x + 3.9999999 = 0 are: \n");
	printf("for  float values: ");
	float_solve(fa, fb, fc);

	printf("for double values: ");
	double_solve(da, db, dc);

	printf("\n");
}

// See Also: https://www.h-schmidt.net/FloatConverter/IEEE754.html
void floating_point_conversion_error(void)
{
	printf("(float)   0.1 = %.15f\n", 0.1f);
	printf("(float)  1.02 = %.15f\n", 1.02f);
	printf("(float)   0.5 = %.15f\n", 0.5f);

	printf("(double)  0.1 = %.30f\n", 0.1d);
	printf("(double) 1.02 = %.30f\n", 1.02d);
	printf("(double)  0.5 = %.30f\n", 0.5d);

	printf("\n");
}

void floating_point_expression(void)
{
	float pi = 7.0/22.0;
	float value = 12345.6f;
	float another = 14561.23f;

	printf("      pi: %f %.15f\n", pi, pi);
	printf(" 12345.6: %f %.15f\n", value, value);
	printf("14561.23: %f %.15f\n", another, another);

	printf("\n");
}

void store_float_as_int(void)
{
	union { uint32_t i; float f; } u;

	u.f = 14561.23f;
	printf("converted float value 14561.23 to int: %u 0x%04X\n", u.i, u.i);

	printf("\n");
}

void retrieve_float_from_int(void)
{
	union { uint32_t i; float f; } u;

	u.i = 0x40490FDB;
	printf("converted int value 0x40490FDB to float: %f\n", u.f);

	printf("\n");
}

void floating_point_ranges(void)
{
	printf("      float is %lu bytes\n", sizeof(float));
	printf("     double is %lu bytes\n", sizeof(double));
	printf("long double is %lu bytes\n", sizeof(long double));

	printf("\n");
}
