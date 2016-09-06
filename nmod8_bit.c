#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
//	n=n<<29;
//	printf("%d\n",n);
	n=n&7;
	printf("%d",n);
	
}
