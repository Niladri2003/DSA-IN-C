#include<stdio.h>

int main(){
   int size,ind,arr[20];
   printf("Enter the size of array: ");
   scanf("%d",&size);
    arr[size];
   printf("Enter the elements of array: ");
   for(int i=0;i<size;i++){
         scanf("%d",&arr[i]);
   }
   printf("enter the index no to delete your element: ");
   scanf("%d",&ind);
   for(int i=ind;i<size-1;i++){
    arr[i]=arr[i+1];
    
   }size=size-1;

   printf("after deletation array is :-\n");
   for(int i=0;i<size;i++){
    printf(" %d,",arr[i]);
   }

    return 0;
}