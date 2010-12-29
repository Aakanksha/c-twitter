#include <stdio.h>

// absolutely necessary
void	printStuff		();
void	setIntValue		(int* c);

main ()
{
	printStuff();
	int a;
	a = 1;
	setIntValue(&a);
	printf( "Value of a is: %i\n", a );
}

void printStuff()
{
	int a = 1;
	int* b = &a;
	*b = 2;
	printf( "Value is: %i\n", a );
	printf( "Value is: %p\n", b );
	printf( "Value is: %i\n", *b );
}

void setIntValue(int* c)
{
	printf( "Value of c is: %i\n", *c );
	*c = 2;
	printf( "Value of c is: %i\n", *c );
}
