#include <stdio.h>
#include <string.h>

main ()
{
	char a[100];
	char b[100];
	strcpy(a, "Buddy");
	strcpy(b, "Williams");
	strcat(a, b);
	printf( "Result: %s\n", a);
}
