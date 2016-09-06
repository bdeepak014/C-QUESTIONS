#include<stdio.h>
int invert(int x,int p,int n)
{
 	while(n--)
	{
 		x=x^(1<<(p-1));
 		p++; 
	}
	return x;
}
int main()
{
	int x,p,n;
	scanf("%d%d%d",&x,&p,&n);
	int res=invert(x,p,n);
	printf("%d",res);
	return 0;
}
