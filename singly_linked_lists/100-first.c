#include "lists.h"
#include <stdio.h>

void __attribute__ ((constructor)) bfmain(void);

/**
 * bfmain - constructor function executed before main.
 *
 * Description: This function prints a message before the main function
 * is executed. It is set to run automatically on program startup using
 * the constructor attribute.
 */

void bfmain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
