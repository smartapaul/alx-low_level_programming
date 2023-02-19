/**
 * File: 4-puts.c
 * Auth: Paul Wahome <smarterpaul@gmail.com>
 */

#include<stdio.h>

/**
 * calling funtion main
 *Description: main fuction is the entry point for our program
 */
int main(void)

{
/**puts - initializing string to call with puts function
*
*Description: initializes mystr fuction.
*/
        char mystr[] = "\"Programming is like building a multilingual puzzle\n";
/**writing string to stdout
* put calls mystr function value
*/
        puts(mystr);
/**
*Always return zero
*/
        return (0);
}
