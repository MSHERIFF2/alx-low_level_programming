#include <stdio.h>

/**
 * Apply the constructor attribute to beforemain()
 * so that it is executed before main()
 */
void startbefore_main(void) __attribute__ ((constructor));
/**
 * startbefore_main - This functions print a text
 */
void startbefore_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
