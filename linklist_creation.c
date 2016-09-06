#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start;
//struct node *temp1;
void insert(int x)
{
    struct node *temp;
    static struct node *temp1;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp1->next=temp;
    }
    temp1=temp;
}
void print()
{
    struct node *p=start;
    while(p!='\0')
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    start=NULL;
    int n,i,x;
    scanf("%d",&n);
    for(i = 0 ;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    print();
}
