#include <stdio.h>

int main()
{
int n = 5;
int i, j;
for(i=1; i<=n; i++)
{
for(j=i; j>=1; j--)
{
printf("%d ", (n-j)+1);
}
printf("\n");
}
}
