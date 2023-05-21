#include<stdio.h>
int main()
{
    int a,b,c,i,m,t;
    scanf("%d %d %d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
    	m=i;
    	t=a*m;
    	printf("%d x %d = %d
",a,m,t);
	}
}