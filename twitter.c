#include <stdio.h>
#include <string.h>

void getKeyboardInput ( char* a );
const int inputSize = 300;

main ()
{
	char a[inputSize]; // = "Hello, world!";
	printf( "What's your status?\n" );
	getKeyboardInput( a );
	printf( "Your status will be set to:\n%s", a );
}

void getKeyboardInput ( char* a )
{
	fgets(a, inputSize, stdin);
	// strip the trailing line break
	if( a[strlen(a) - 1] == '\n' ) {
		a[strlen(a) - 1] = '\0';
	}
}
