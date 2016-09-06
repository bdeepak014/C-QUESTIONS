#include<stdio.h>
struct node
{
int data;
struct node *next;
};
struct node *start;
struct node *temp;
void insert(int x)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    if(start==NULL)
    {
        temp->next=NULL;
        start=temp;
    }
    else
    {
        temp->next=NULL;
        struct node *temp1;
        temp1=start;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void insert_before(int j,int k)
{
    struct node *temp1,*temp2;
    temp1=start;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=k;
    while(j!=temp1->data)
    {
        temp2=temp1;
       temp1=temp1->next;
    }
    temp->next=temp2->next;
    temp2
    ->next=temp;
}
void print()
{
    struct node *p;
    p=start;
    while(p!='\0')
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
void main()

{
    start=NULL;
    int n,i,x;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&x);
        insert(x);
    }
   // print();
    int j,k;
    printf("Enter insert before and no. to be inserted:\n");
    scanf("%d %d",&j,&k);
    insert_before(j,k);
    print();

}
