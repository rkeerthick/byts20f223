#include <stdio.h>

int main()
{
int n = 5;
int i, j;
for(i=n; i>=1; i--)
{
for(j=n; j>=i; j--)
{
printf("%d ", j);
}
printf("\n");
}
}
