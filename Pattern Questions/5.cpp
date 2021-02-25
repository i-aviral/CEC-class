#include<stdio.h>
int main()
{
	int j,i,n;
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}

	printf("\n");
}
}
