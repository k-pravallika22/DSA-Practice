#include<stdio.h>
int a[100],b[100];
void sort(int low, int high);
void merge(int low, int mid, int high);


void merge(int low,int mid,int high){
    int i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high){
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high){
        b[k++]=a[j++];
    }
    for(i=low;i<=high;i++){
        a[i]=b[i];
    }
}

void sort(int low,int high){
    int mid;
    if(low<high){
        mid = ((low+high)/2);
        sort(low,mid);
        sort(mid+1,high);
        merge(low,mid,high);
    }
}





int main(){
    int n,i;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter the elemnts");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     sort(0,n-1);
     printf("sorted array is");
     for(i=0;i<n;i++){
        printf("%d",a[i]);
     }
     return 0;
}