#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start;
struct Node *temp;
void Insert(struct Node **start,int x)
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
   /* if(start == NULL)
    {
        temp->next=NULL;
        start = temp;
    }
    else*/
   // {
        temp->next=*start;
        *start =temp;
    //}

}
void print(struct Node **start)
{
   // struct Node *temp;
   // temp=*start;
    while(*start!='\0')
    {
        printf("%d\n",(*start)->data);
        (*start)=(*start)->next;
    }
}
struct node * reverse(struct Node **start)
{
    struct Node *current,*next,*prev;
    prev=NULL;
    current=*start;
    while(current!='\0')
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *start=prev;
   return *start;
}
void main()
{

   // struct node *start=NULL;
    int n,i,x;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);
        Insert(&start,x);
    }
    start=reverse(&start);
    print(&start);


}
