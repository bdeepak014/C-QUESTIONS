#include<stdio.h>
void main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		int temp=i;
		while(temp)
		{
			count=count + (temp & 1);
			temp = temp >> 1;		
		}	
	}
	printf("%d",count);	
}
