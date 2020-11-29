#include<stdio.h>
int main()
{
	int i,j,sum;
	for(i=9;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			sum=i*j;
			printf("%d*%d=%d\t",i,j,sum);
		}
		printf("\n");
	}
	return 0;
}