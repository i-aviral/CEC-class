#include<stdio.h>
int main()
{
	int j,i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			printf(" ");
		}
	   for(j=0;j<n*2-i*2-1;j++)
        {
            printf("%d",j+1);
        } 

	printf("\n");
}
}
