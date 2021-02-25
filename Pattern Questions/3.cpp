#include<stdio.h>
int main()
{
	int j,i,n,l;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("*");
		}
	printf("\n");
}
}
