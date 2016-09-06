#include<stdio.h>
main()
{
	int n,i,mul=1,div;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		mul=mul*a[i];
	}
	for(i=0;i<n;i++)
	{
		div=mul/a[i];	
		printf("%d ",div);
	}

}
