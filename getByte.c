#include<stdio.h>
main()
{
    int x,p;
    scanf("%d%d",&x,&p);
    printf("%d",(255<<((p-1)<<3))&x);
}
