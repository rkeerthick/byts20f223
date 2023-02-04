#include <stdio.h>

int main()
{
int n = 5;
int cnt;
cnt = 1;
int i, j;
for(i=1; i<=n; i++)
{
for(j=1; j<=i; j++)
{
printf("%d ", cnt++);
}
printf("\n");
}
}
