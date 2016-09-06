#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int a[size],b[size],c[size],i,mul;
	b[0]=1;
	c[size-1]=1;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=size-2;i>=0;i--)
	{
		c[i]=c[i+1]*a[i+1];
	}
	printf("Output:");
	printf("%d\n",c[0]);
	for(i=1;i<size;i++)
	{
		b[i]=b[i-1]*a[i-1];
		mul=b[i];
		c[i]=c[i]*b[i];
		printf("%d\n",c[i]);
		
	}
	
	
}
