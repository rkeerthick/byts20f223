#include <stdio.h>

int main()
{
int n = 5;
int i, j;
char c[] = "hello";
for(i=1; i<=n; i++)
{
for(j=1; j<=i; j++)
{
printf("%c ", c[j-1]);
}
printf("\n");
}
}
