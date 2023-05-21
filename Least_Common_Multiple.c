#include<stdio.h>
int main()
{
    int a,b,i=1,lcm;
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b;
    while(1)
    {
        if(((lcm*i)%a==0 &&(lcm*i)%b==0))
        {
            printf("%d",lcm*i);
            break;
        }
        i++;
    }
}