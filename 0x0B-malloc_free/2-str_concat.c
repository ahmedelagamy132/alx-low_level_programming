#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenate
*@s1:str
*@s2:str
*Return: str
*/

char *str_concat(char *s1, char *s2)
{

int no = 0, ind = 0,  tall;
char *tstr;

if (s2 == NULL)
{		
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
tall = 0;
while (s1[no] || s2[no])
{
tall++;
no++;
}
tstr = malloc(1 * tall);

if (tstr == NULL)
{
return (NULL);
}
no = 0;
while (s1[no])
{
tstr[ind++] = s1[no];
no++;
}
no = 0;
while (s2[no])
{
tstr[ind++] = s2[no];
no++;
}
return (tstr);
}
