#include<stdio.h>
#define SIZE 10
int stack[SIZE],top=-1;

void push(){
    int x;
    if(top==SIZE-1){
        printf("stack overflow");
    }
    else
    printf("enter the element to enter");
    scanf("%d",&x);
    top++;
    stack[top]=x;
}
void pop(){
    if(top==-1){
        printf("stack underflow\n");
    }
    else
    printf("poped element is%d",stack[top]);
    top--;
}
void peek(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else
    printf("peek element is %d",stack[top]);
}
void display(){
    int i;
    if(top==-1){
        printf("stack is empty\n");
    }
        else
        printf("elemnts in the stack are");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    int main(){
        int choice;
       while(1){
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
 printf("enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();break;
            case 2: pop();break;
            case 3: peek();break;
            case 4: display();break;
            case 5: return 0;
            default : printf("invalid choice");
        }
    }
}