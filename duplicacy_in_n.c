#include<stdio.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n; i++ )
	{
		if(arr[abs(arr[i])] < 0)
		{
			printf("%d ",abs(arr[i]));	
		}
		else
		{
			arr[abs(arr[i])] = (-1) * arr[abs(arr[i])]; 
		}
	}
}
