#include <unistd.h>

/**
 * _putcher creation
 * yep
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
