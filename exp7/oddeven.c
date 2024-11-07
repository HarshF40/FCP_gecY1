#include<stdio.h>

int main(){
  int arr[8];
  int ocount=0,ecount=0;
  printf("\nEnter 8 elements: ");
  for(int i=0;i<8;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<8;i++){
    if(arr[i]%2==0)
      ecount++;
    else
      ocount++;
  }
  printf("\nOdd count: %d\nEven count: %d\n",ocount,ecount);
  return 0;
}
