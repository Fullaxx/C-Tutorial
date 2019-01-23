#include <stdio.h>
#include <limits.h>

void type_size_ranges(void)
{
	// Print the sizes of each block of memory
	printf("     char is %lu bytes\n", sizeof(char));
	printf("    short is %lu bytes\n", sizeof(short));
	printf("      int is %lu bytes\n", sizeof(int));
	printf("     long is %lu bytes (always word size)\n", sizeof(long));
	printf("long long is %lu bytes\n", sizeof(long long));

	printf("\n");

	printf("word size: %d bits\n", __WORDSIZE);

	printf("\n");

	// Print the max value each type can hold
	printf("     char range: %d <= x <= %d\n",     CHAR_MIN,  CHAR_MAX);
	printf("    short range: %d <= x <= %d\n",     SHRT_MIN,  SHRT_MAX);
	printf("      int range: %d <= x <= %d\n",     INT_MIN,   INT_MAX);
	printf("     long range: %ld <= x <= %ld\n",   LONG_MIN,  LONG_MAX);
	printf("long long range: %lld <= x <= %lld\n", LLONG_MIN, LLONG_MAX);

	printf("\n");

	// Print the max value each type can hold
	printf("     unsigned char range: 0 <= x <= %u\n",  UCHAR_MAX);
	printf("    unsigned short range: 0 <= x <= %u\n",  USHRT_MAX);
	printf("      unsigned int range: 0 <= x <= %u\n",  UINT_MAX);
	printf("     unsigned long range: 0 <= x <= %lu\n", ULONG_MAX);
	printf("unsigned long long range: 0 <= x <= %lu\n", ULONG_MAX);

	printf("\n");
}
