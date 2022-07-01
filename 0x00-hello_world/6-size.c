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
	char charType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longIntType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongIntType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
