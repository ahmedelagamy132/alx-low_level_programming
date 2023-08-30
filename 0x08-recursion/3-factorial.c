#include "main.h"

/**
 *factorial - fbvnkcbml/mdcf,b/l,cv l/bmcv
 *@n: jv,cbnlfkbn.lknvmcv
 *Return: df,jdfk.jmbl/,cvl/m bc
 */
int factorial(int n)
{
/*condition to get the factorial*/
if (n == 0)
{

	return (1);
}
else if (n < 0)
{
return (-1);
}
else
{

return (factorial(n - 1) * n);

}

}
