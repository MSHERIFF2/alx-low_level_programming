#include <stdio.h>

/**
 * startbefore_main - declaring function before main
 */
void startbefore_main(void) __attribute__ ((constructor));
/**
 * startbefore_main - This functions print a text
 */
void startbefore_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
