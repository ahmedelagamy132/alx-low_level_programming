#include "main.h"
#include <string.h>


/**
 * palindcheck - check palind
 * @s: string
 * @length: length
 * @loop: index
 * Return: 1, 0
 */
int palindcheck(char *s, int loop, int length)
{
if (loop == length || loop > length)
	return(1);
if (s[loop] == s[length])
	return (palindcheck(s, loop + 1, length - 1));
return (0);

}
/**
 * is_palindrome - palindrome checker
 * @s: string
 * Return: 1, 0
 */
int is_palindrome(char *s)
{
	int loop = 0;
	int length = strlen(s) - 1;
	return (palindcheck(s, loop, length));
}
