#include<stdio.h>

int small(int*,int);

int main(){
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements in the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray: ");
    for(int i =0;i<size;i++)
        printf("%d ",arr[i]);

    printf("\nSmallest Value: %d\n",small(arr,size));
    
    return 0;
}

int small(int* ptr,int size){
    int min = *ptr;
    for(int i =0;i<size;i++){
        if(*ptr < min)
            min = *ptr;
    ptr++;
    }
    return min;
}