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

void floating_point_expression(void)
{
	float pi = 7.0/22.0;
	float value = 12345.6f;
	float another = 14561.23f;
	printf("pi: %f %9.6f %.15f %.22f\n", pi, pi, pi, pi);
	printf("value: %f %9.6f %.15f %.22f\n", value, value, value, value);
	printf("another: %f %9.6f %.15f %.22f\n", another, another, another, another);

	printf("\n");
}

void store_float_as_int(void)
{
	union { uint32_t i; float f; } u;

	u.f = 14561.23f;
	printf("float value 14561.23 (as int): %u 0x%04X\n", u.i, u.i);

	printf("\n");
}

void floating_point_ranges(void)
{
	printf("      float is %lu bytes\n", sizeof(float));
	printf("     double is %lu bytes\n", sizeof(double));
	printf("long double is %lu bytes\n", sizeof(long double));

	printf("\n");
}
