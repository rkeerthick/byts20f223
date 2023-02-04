void main()
{
	int n = 5;
	int i, j;
	for(i=1; i<=n; i++)
	{	
		if(i==1)
		{
			printf("1 ");
		}
		else{
			int mid = (pow(2, i-1)+1)/2;
			int cnt = 1;
			for(j=1; j<=1+pow(2,i-1); j++)
			{
				if(j <= mid)
				{
					printf("%d ", cnt);
					cnt++;
				}
				else
				{
					printf("%d ", cnt);
					cnt--;
				}
			}
		}
		printf("\n");
	}
}
