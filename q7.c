#include <stdio.h>

int main()
{
int n = 5;
int i, j;
for(i=n; i>=1; i--)
{
for(j=1; j<=i; j++)
{
printf("%d ", (n-j)+1);
}
printf("\n");
}
}
