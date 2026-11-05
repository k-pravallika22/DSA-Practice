#include<stdio.h>
#include<ctype.h>
int main(){
    int i,a,b,stack[100],top=-1;
    char exp[100];
printf("enter the expression");
scanf("%s",exp);
         for(i=0;exp[i]!='\0';i++){
            if(isdigit(exp[i])){
                stack[++top]=exp[i] -'0';
            }
            else{
                b = stack[top--];
                a = stack[top--];
            
         
         switch(exp[i]){
            case '+': stack[++top] = a+b;break;
            case '-': stack[++top] = a-b;break;
            case '*': stack[++top] = a*b;break;
            case '/': stack[++top] = a/b;break;

         }}}
         printf("%d",stack[top]);
         return 0;

         }