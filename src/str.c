#include <stdio.h>
#include <string.h>

main()
{
	char a[255];
	gets(a);
	puts(a);
}

puts( char *instr ) {
	int i = 0;
	for( i = 0; i < sizeof( instr ); i++ ) {
		if( instr[i] = "\0" ) break;
		printf( "%c", a[i] );
	}
	printf( "\n%i", i );
}

gets( char *modstr )
{
	fgets( modstr, inputSize, stdin );

	// strip the trailing line break
	if( modstr[ strlen( modstr ) - 1 ] == '\n' ) {
		modstr[ strlen( modstr ) - 1 ] = '\0';
	}
}
