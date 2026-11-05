#include<stdio.h>
int main(){
    int a[100],i,n,high,low,mid,key;
    printf("enter the no of elemnts");
    scanf("%d",&n);
    printf("enter the sorted elemnts");
      for(i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
      printf("enter element to search");
      scanf("%d",&key);
      low=0;
      high=n-1;
      while(low<=high){
        mid =( (high+low)/2);
            if(a[mid]==key){
                printf("element found at position %d",mid+1);
                return 0;

            }
            else if(key<a[mid]){
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
      }
      printf("element not found");
      return 0;
}