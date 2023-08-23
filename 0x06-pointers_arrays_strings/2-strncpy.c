#include "main.h"


/**
 * _strncpy - sklfmrskdmv,sf
 *
 * @dest: sdkfmsdlf,s
 *
 * @src: dsflkmsdkf
 *
 * @n: nsdfsdmflds,f
 *
 * Return: gdfkjvnxv
 */
 
char *_strncpy(char *dest, char *src, int n)
{
int iter = 0;
/*loop to assign values*/

while (iter < n && src[iter])
{
dest[iter] = src[iter];
iter = iter + 1;
}

/*assign the null value*/
while (iter < n)
{
dest[iter] = '\0';
iter++;
}

return (dest);
}
