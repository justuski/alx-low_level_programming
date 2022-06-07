#include "main.h"

/**
 * _islower - tests whether a character is a
 * lowercase letter.
 * @c: character to test.
 * Returns 1 if c is lowercase, Returns 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
