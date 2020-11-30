#include<stdio.h>
int function(int n)
{int i;
	for(i=n-1;i>=1;i--)
	{	
	n+=i;
	
}
	printf("xingcan=%d\n",n);
	return n;
}
int main()
{   int m,outcome;
	printf("input a number:");
	scanf("%d",&m);
    outcome=function(m);
	printf("shican=%d\n",m);
	printf("1+2+3+...+%d+%d=%d\n",m,m-1,outcome);
	return 0;
}