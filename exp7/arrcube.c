#include<stdio.h>
#include<math.h>

void cube(int (&arr)[], int size){
  for(int i=0;i<size;i++){
   arr[i] = pow(arr[i],3); 
  }
}

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,0};
      printf("\nArray before cubing: ");
      for(int arr : arr){
      printf("%d ",arr);
      }
  cube(arr,10);
      printf("\nCubed Array: ");
  for(int arr : arr){
    printf("%d ",arr);
  }
      printf("\n");
  return 0;
}
