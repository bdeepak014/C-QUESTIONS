#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a, const void *b)
 {
     return strcmp(*(char **)a , *(char **)b);
 }
 char cmp1(const void *a, const void *b)
 {
     return (*(char *)a - *(char *)b);
 }
int main()
{
   char  **input=(char **)malloc(sizeof(char *) * 5);
//char buf[100];
    int i;
   printf("Enter some text\n");
   for(i=0;i<5;i++)
   {

input[i]=(char *)malloc(sizeof(char) * 5000);
   scanf("%s", input[i]);
 // input[i]=buf;
   // printf("%s\n", input[i]);
   qsort(input[i],5,sizeof(char),cmp1);
   }
   qsort(input,5,sizeof(char *),cmp);
    for(i=0;i<5;i++)
   printf("%s\n", input[i]);
}
