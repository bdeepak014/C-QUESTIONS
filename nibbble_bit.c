#include<stdio.h>
void main()
{
	int n,n1,n2;
	scanf("%d",&n);
	n1=n&15;
	n2=n&240;
	n1=n1<<4;
	n2=n2>>4;
	printf("%d",n1|n2);
}
