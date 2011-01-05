/**
 *  @brief update your twitter status from the command-line
 *  @file twitter.c
 *  @author Buddy Williams <buddywilliams@gmail.com>
 */

#include <stdio.h>

// ------------------------------------------
// Process of making a Twitter post, finally!
// ------------------------------------------
// 1. Get request token
// 		Url: http://api.twitter.com/oauth/request_token
//		- Ensure to use Authentication header
//		- Build required fields
//		- Sign data with secret key: HMAC-SHA-1
// 2. Get user authorization through browser
// 		Url: http://api.twitter.com/oauth/authorize
//		- more info at: http://oauth.net/core/1.0/#anchor9
// 3. Prompt user for 7-digit pin
// 4. Get access token
//		Url: http://api.twitter.com/oauth/access_token
//		- use pin in param oauth_verifier
// 5. Make Twitter update
// ------------------------------------------

main ()
{
}
