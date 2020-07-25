#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *head = NULL;
void push_front(int value);
void push_back(int value);
void pop_front();
void pop_back();
void size();
void tail();
void empty();
void back();
void display();
void he();
int main()
{
    int op, num ;
     do
   {
   printf("options : \n");
   printf("1.push fornt \n 2.push back \n");
   printf("3.pop front \n 4.pop back \n");
   printf("5.display \n 6.Size \n");
   printf("7.head \n 8.Tail \n");
   printf("8.empty \n 9.back \n 10.Exit \n");
   printf("Enter your option : \n");
   scanf("%d ",&op);
   if(op <= 0 || op >10){
       printf("invalid option \n");
   }
   else if(op == 1)
   {
       push_front(num);
   }
   else if (op == 2)
   {
       push_back(num);
   }
   else if (op == 3)
   {
      pop_front();
   }
   else if (op == 4)
   {
       pop_back();
   }
   else if (op == 5)
   {
       display();
   }
   else if (op == 6)
   {
       size();
   }
   else if (op == 7)
   {
       he();
   }
   else if (op == 8 )
   {
       empty();
   }
   else if (op == 9)
   {
       back();
   }



   } while (op !=10);
   return 0;
}

void push_front(int value)
{
    Node new_node=(Node)malloc(sizeof(Node));
    new_node->data=value;
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    else
    {
        Node *temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        new_node->next=head;
        head= new_node;
        temp->next=head;
    }
}
void push_back(int value)
{
    Node new_node=(Node )malloc(sizeof(Node));
    new_node->data=value;
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
    }
}
void pop_back()
{
    Node *hold=head;
    Node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    head=hold->next;
    temp->next=head;
    free (hold);
}
void pop_front()
{
    Node *pre_node;
    Node *temp=head;
    while(temp->next!=head)
    {
        pre_node=temp;
        temp=temp->next;
    }
    pre_node->next=head;
    free (temp);
}
void size()
{
    Node *temp=head;
    if(head==NULL)
    {
        printf("List is empty");
        return main;
    }
    else
    {
        int count=1;
        while(temp->next!=head)
        {
            count+=1;
            temp=temp->next;
        }
        printf("%d\n",count);
    }
}
void tail()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void empty()
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf(" list is not empty\n");
    }
}
void he()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("%d\n",head->data);
    }
}
void back()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
    printf("\n");
}
