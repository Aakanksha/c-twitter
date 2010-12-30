#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

void 					getKeyboardInput 	( char* a );
const int 		inputSize = 			300;
void 					get								(char* param);

CURL *curl;
CURLcode res;

main ()
{
	curl = curl_easy_init(); // initialize curl
	char a[inputSize]; // = "Hello, world!";

	printf( "What's your status?\n" );

	getKeyboardInput(a);

	printf( "Your status will be set to:\n%s\n", a );
	printf( "Executing GET request now...\n");

	get(a);

	printf( "Done.\n");
}

void getKeyboardInput ( char* a )
{
	fgets(a, inputSize, stdin);
	// strip the trailing line break
	if( a[strlen(a) - 1] == '\n' ) {
		a[strlen(a) - 1] = '\0';
	}
}

void get(char* param)
{
	char p[inputSize];
	strcpy(p, "update=");
	strcat(p, param);
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:4567");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, p);
    res = curl_easy_perform(curl);
    /* always cleanup */
    curl_easy_cleanup(curl);
  }
}
