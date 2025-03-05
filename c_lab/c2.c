#include <stdio.h>

int binarySearch(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]<target){
        return binarySearch(arr,mid+1,high,target);
    }else if(arr[mid]>target){
        return binarySearch(arr,low,mid-1,target);
    }
}
int main(){
    int n,i,target;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements in sorted order",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target value");
    scanf("%d",&target);
    int result=binarySearch(arr,0,n-1,target);
    if(result!=-1){
        printf("Element found at the index %d",result);
    }else{
        printf("Element not found");
    }
    return 0;
}