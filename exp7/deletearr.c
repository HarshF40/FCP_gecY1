#include<stdio.h>

int main(){
  int size = 10;
  int arr[size] = {1,2,3,4,5,6,7,8,9,0};
  int pos;
  printf("\nEnter Position of the element to delete: ");
  scanf("%d",&pos);
  printf("\nArray Before Deleting: ");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  for(int i=pos-1,j=pos;i<size;i++,j++){
    arr[i] = arr[j];
  }
  size--;
  printf("\nArray after deleting: ");
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
