#include<stdio.h>
#include<math.h>

int main(){
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    int* ptr[size];
    printf("\nEnter the elements in the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray before operation: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
        ptr[i] = &arr[i];
    }

    for(int i=0;i<size;i++){
        *ptr[i] = pow(*ptr[i],3);
    }

    printf("\nArray after operation: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
        ptr[i] = &arr[i];
    }

    printf("\n");

    return 0;
}

