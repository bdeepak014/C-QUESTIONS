#include<stdio.h>
#include<sys/time.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}		
		}
	}
}
main()
{
	struct timeval start,end;
	int b[8000],c[16000],i,j,m=8000,n=16000;
	long int k,l;
	float diff;
	for(i=0;i<8000;i++)
	{
		b[i]=7999-i;
	}
	for(i=0;i<8000;i++)
	{
		c[i]=15999-i;
	}
	gettimeofday(&start,NULL);
	bubblesort(b,m);
	gettimeofday(&end,NULL);
	k=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
	printf("%ld\n",k);
	gettimeofday(&start,NULL);
	bubblesort(c,n);
	gettimeofday(&end,NULL);
	l=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
	printf("%ld\n",l);
	diff=(float)l/(float)k;	
	printf("%f",diff);
}


