#include<stdio.h>
int main()
{
	int j,i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
}
		for (i=n+1;i>=1;i--)
		{
		for (j=n-i;j>=0;j--)
		{
			printf(" ");
		}
	   for(j=i*2-1;j>=1;j--)
        {
            printf("%d",j);
        } 

	printf("\n");
}
}
