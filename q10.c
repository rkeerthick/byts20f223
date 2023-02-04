#include <stdio.h>

int main()
{
int n = 5;
int cnt;
int i, j;
for(i=1; i<=n; i++)
{
cnt = 97;
for(j=1; j<=i; j++)
{
printf("%c ", cnt++);
}
printf("\n");
}
}
