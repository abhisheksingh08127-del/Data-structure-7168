/* Enrollment no- 92500527168 */
/*9. Write a program which performs the following operations using a
simple queue. : insert() -> delete() -> display() */

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void insert();
void delete_element();
void display();

void main()
{
    int op;
    do{
        printf("\n 1.Insert");
         printf("\n 2.Delete");
          printf("\n 3.display");
           printf("\n 4.Exit");

           printf("\n Enter your choice:");
           scanf("%d",&op);

           switch(op)
           {
               case 1:
               insert();
               break;

                 case 2:
               delete_element();
               break;
                 case 3:
               display();
               break;
                 default:
               printf("\n invalid option:");
           }

           }while(op!=4);



}
void insert(){
int num;
printf("\n Enetr number");
scanf("%d",&num);

if(rear==MAX-1)
{
    printf("\n overflow:");
    return;
}
else if(front==-1 && rear==-1){
        front=rear=0;

}
else{
    rear++;

}

 queue[rear]=num;


}

void delete_element()
{
    int val;
    if(front==-1 || front>rear){
        printf("underflow");
        return;
    }
    else{
        val=queue[front];
        printf("\n Deleted value is:%d",val);


    if(front==rear){
        front=rear=-1;
        return;
    }
    front++;
    }
}

void display()
{
    int i;
     if(front==-1 || front>rear){
        printf("underflow");
        return;
    }

    else{
      for(i=front;i<=rear;i++)
      {
       printf("\t%d",queue[i]);
      }
    }
}

