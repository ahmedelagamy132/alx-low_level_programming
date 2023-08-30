#include "main.h"

int get_squ_root(int mum1, int num);

/**
 * _sqrt_recursion - v,jdfbndfnvkbv
 *
 * @n: bdfvnmcnbv
 *
 * Return: cvb,jncvkmbkvmvc
 */
int _sqrt_recursion(int n)
{
return (get_squ_root(n, 1));
}

/**
 * get_squ_root - ,jnvkfmvk.mdfvfcv
 *
 *@mum1: vdfvmdk.fbm,dv
 *
 *@num: v,fjdnxvkmc.c
 *
 * Return: fv,jdnfkvmdf,v
 */

int get_squ_root(int mum1, int num)
{
if (num * num == mum1)
{
return (num);
}
else if (num * num < mum1)
{
return (get_squ_root(mum1, ++num));
}
else
{
return (-1);
}
}
