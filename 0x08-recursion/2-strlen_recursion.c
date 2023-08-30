#include "main.h"

/**
 * _strlen_recursion - dvk.m.fkvmdxfl/v,df;vdfv
 *
 *@s: vfdjlvn.kdfmv;ldfvfd
 *
 * Return: cj,sdnvjxfcvc
 */
 
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
s = s + 1;
return (1 + _strlen_recursion(s));
}
else
{
return (0);

}
}
