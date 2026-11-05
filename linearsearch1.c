#include<stdio.h>
int main(){
    int i,key,n,found = 0, a[100];

    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter array elements");
      for(i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
    printf("enter the element to search");
      scanf("%d",&key);
       for(i=0;i<n;i++){
        if(key==a[i]){
            found=1;
            break;
        }
       }
       if(found==1)
        printf("elemnt found at the index %d", i);
       
       else
        printf("element not found");
       
       
       return 0;
}