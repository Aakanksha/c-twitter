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

dynamicString()
{
	char *a = NULL;
	a = malloc( sizeof(char) * strlen("hello world") );

	if(!a) {
		exit(1);
	}

	strcpy( a, "hello world" );
	printf( "result: %s\n", a );
}

strTest ()
{
	char pin[255];
	char access[255];
	char *token = "to";

	printf( "Value: %s\n", token );
	printf( "Token size: %i\n", sizeof(token) );
	printf( "String length: %i\n", strlen(token) );
	printf( "Token address: %p\n", &token );

	getToken( &token );

	printf( "Value: %s\n", token );
	printf( "Token size: %i\n", sizeof(token) );
	printf( "String length: %i\n", strlen(token) );
	printf( "Token address: %p\n", &token );
}
