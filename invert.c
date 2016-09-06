#include<stdio.h>
int invert(int x,int p,int n)
{
    int c=n;
    int z=1;
        z=z<<n-1;
     printf("%d\n",z);
     p=p-c+1;
     printf("%d\n",p);
    while(p)
    {
        x=x^z;
        z=z<<1;
        p=p-1;
    }
    printf("%d",x);
    return x;
}
main()
{
        int x,p,n,m;
        scanf("%d%d%d",&x,&p,&n);
        m= invert(x,p,n);
        printf("%d",m);
}
