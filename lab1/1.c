#include <stdio.h>

typedef struct Node node
struct {
    int value;
    struct Node *next;
};

int main(){

    node a, b, c,d;
    mode *head;
    head ->
     First Element (a) ->
     secound Element (b)->
      Third Element (c)->
      Forth Element -> NULL

      head= &a
      a.value=1;
      a.next=&b;

       b.value=2;
      b.next=&c;

       c.value=3;
      c.next=&d;

       d.value=4;
      d.next=NULL;

     /* printf( "%p \t %d",&head,head);
    printf( "%p \t %p",&b b.value, b.next);
      printf( "%p \t %p",&c c.value, c.next);
        printf( "%p \t %p",&d d.value, d.next);*/


    temp= head;

    while(){
        printf("%p %d \t %p\n,", temp temp->value, temp->next);
        temp=temp->next;}

 return 0;
}

