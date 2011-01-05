#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo(char *);

main()
{
	char *a = NULL;
	char *b = NULL;
	a = foo("Hi there, Chris");
	printf("1:%s\n", a);
	free(a);
	b = foo("Goodbye");
	printf("1:%s\n", b);
	//free(b); 
	printf("From main: %s %s\n", a, b);
}

char *foo(char *p)
{
	char *q = (char *)malloc(strlen(p)+1);
	strcpy(q, p);
	printf("From foo: the string is %s\n", q);
	return q;
}

