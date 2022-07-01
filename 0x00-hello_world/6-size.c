#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longIntType;
	long long int longLongIntType;
	
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of a int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longLongIntType));
	printf("size of a float: %zu bytes \n", sizeof (floatType));

	return 0;
}
