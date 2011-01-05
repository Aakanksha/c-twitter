/**
 *  @brief example of how to concatenate strings in c
 *  @file concat.c
 *  @author Buddy Williams <buddywilliams@gmail.com>
 */

#include <stdio.h>
#include <string.h>

main ()
{
	char *a = "Buddy";
	char *b = "Williams";
	char c[sizeof(a) + sizeof(b)];
	strcat(c, a);
	strcat(c, b);
	printf( "Result: %s\n", c);
}
