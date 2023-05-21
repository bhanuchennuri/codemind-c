#include<stdio.h>
int main()
{
	int m,n,i,a,b,c,bags;
	scanf("%d %d %d",&a,&b,&c);
	i=b*c;
	n=a/i;
	m=a%i;
	if(m!=0)
	{
	    bags=n+1;
	    printf("%d",bags);
	}
	else
	{
		printf("%d",n);
	}
} 