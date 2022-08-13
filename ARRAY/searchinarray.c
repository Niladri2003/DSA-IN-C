#include<stdio.h>
int findelement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        return i;
        }
        else
        return -1;
    }
}
int main(){
   
    int key=0,find,n=5;
    int  arr[n];
    printf("Enter array element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element: ");
    scanf("%d",&key);
    find=findelement(arr,n,key);
    if(find == -1)
        printf("Sorry element not found !");
    else
        printf("Element found at position %d",find);
}