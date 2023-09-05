#include "main.h"
#include <stdlib.h>
/**
 * num - dfbgmgldkjnbjvc
 *
 * @phrase: fdvkdf.bjdfv
 *
 * Return:gdflkgdfk.dkgbd
 */
int num(char *phrase)
{
int loop = 0, num_words = 0;

while (phrase[loop] != '\0')
{
if (phrase[loop] == ' ')
{
if (phrase[loop + 1] != '\0' && phrase[loop + 1] != ' ')
{
num_words++;
}
}		
else if (loop == 0)
{
num_words++;
}
loop++;
}
num_words++;
return (num_words);
}
/**
 * **strtow - kgvbukdsfhvldfc
 *
 * @str: xclu,vhdfx,bhlcv
 *
 * Return: hfvbhbvdhfjbhndgjcvv
 */
char **strtow(char *str)
{
int loop1 = 0, loop2  = 0, tall = 0, no_of_words = 0, condition = 0, first, last;
char *extra, **arr1;
if (str == NULL || *str == '\0')
    return (NULL);
while (*(str + tall))
		tall++;
no_of_words = num(str);
if (no_of_words == 1)
	return (NULL);    
if (no_of_words == 0)
    return (NULL);

arr1 = malloc((no_of_words + 1) * sizeof(char *));
if (arr1 == NULL)
    return (NULL);
for (loop1 = 0; loop1 <= tall; loop1++)
{
if (str[loop1] == '\0' || str[loop1] == ' ')
{
if (condition != 0)
{
extra = malloc(condition + 1);
if (extra == NULL)
    return (NULL);
last = loop1;
while (first < last)
    *extra++ = str[first++];
*extra = '\0';
arr1[loop2++] = extra - condition;
condition = 0;
}
}
else if (condition++ == 0)
    first = loop1;
}
arr1[loop2] = NULL;
return (arr1);
}
