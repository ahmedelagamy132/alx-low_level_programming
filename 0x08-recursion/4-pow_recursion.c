#include "main.h"
/**
 * _pow_recursion - dkjsbns,djnksfmdvfs
 *
 *@x: fsvjnsfk.vmkfs.mv
 *
 *@y: fsm;vlmfsvmfsmvf
 *
 * Return: sfvkmsfklv.m s.f
 */


int _pow_recursion(int x, int y)
{

if (y < 0)
{

return (-1);
}
else if (y == 0)
{

return (1);


}
else if (y == 1)
{
return (x);
}
else
{
return (_pow_recursion(x, --y) * x);
}
}
