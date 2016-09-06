#include <stdio.h>
#include <math.h>

int countDigits(int x)
{
    int c = 0;
    while(x)
    {
	c++;
	x /= 10;
    }
    return c;
}

int main()
{
    int a,b;
    printf("Enter the range: ");
    scanf("%d %d",&a,&b);
    int i;
    for(i = a; i <= b; i++)
    {
	int count = countDigits(i);
	int temp = i;
	int res = 0;
	while(temp)
	{
	    int z = temp % 10;
	    res = res + pow(z, count);
	    temp = temp / 10;
	}
	if(res == i)
	    printf("%d ",res);
    }
    printf("\n");
}
