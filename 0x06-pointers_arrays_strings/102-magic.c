#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

/**
 * write your line of code here
 * you are not allowed to use a
 * you are not allowed to modify varibale b
 * only one statement
 * you are not allowed to code anythig than this one
 */

*(p+5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
