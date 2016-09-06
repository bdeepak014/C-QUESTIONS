#include <stdio.h>

void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int left[n1];
	int right[n2];
	for(i=0;i<n1;i++)
	{
		left[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{

		right[j]=arr[m+1+j];
	}
	i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;

		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=left[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[k]=right[j];
		k++;
		j++;
	}
}

void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);

	}

}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }

}
int main(void) {
	// your code goes here
	int i;
	int arr[]={5,3,8,7,1,4};
	mergesort(arr,0,5);
	print(arr,6);
	return 0;
}
