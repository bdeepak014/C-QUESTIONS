#include<stdio.h>
int func(int x,int n,int d)
{		if(x==0) return 0;
		if(n==0) return 1;
		
		long long int temp=func(x,n/2,d);
		long long int result;
		if(n%2 == 1)
		{
			result=(temp%d * temp%d *x%d)%d;
			return result<0?result+d:result;
		}
		else
		{
			result=(temp%d * temp%d)%d;
			return result<0?result+d:result;
		}
}
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",func(a,b,c));
}
