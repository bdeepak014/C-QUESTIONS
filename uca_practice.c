#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],temp,temp1,temp3;
	int i,j,n,k,flag=0;
	scanf("%s",str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		if(str[i]<str[i-1])
		{
			flag=1;
			temp=str[i];
			for(j=i;j<n;j++)
			{
			//	temp=str[i];
				if(str[j]<str[i-1] && str[j]>=temp)
				{
					temp=str[j];
					temp1=j;
//					printf("%c\n",str[j]);	
				}
			}
			str[temp1]=str[i-1];
			str[i-1]=temp;
			printf("%s %d %d\n",str,i,n);
			for(j=i;j<n;j++)
			{
				for(k=i;k<n;k++)
				{
					if(str[k]<str[k+1])
					{
						temp3=str[k];
						str[k]=str[k+1];
						str[k+1]=temp3;
//						printf("x %s x\n",str);
					}
					printf("x %s x\n",str);
				}
//				printf("x %s x\n",str);
			}
			break;
								
		}
	}
	if(flag==1)
	printf("OUTPUT : %s\n",str);
	else
	printf("OUTPUT : \nREMAINS SAME");
}
