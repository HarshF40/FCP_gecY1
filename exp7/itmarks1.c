#include<stdio.h>
#include<math.h>

int main(){
  int n;
  printf("\nEnter The Number of students: ");
  scanf("%d",&n);
  float arr[n];
  printf("\nEnter marks of %d students: ",n);
  for(int i=0;i<n;i++){
    scanf("%f",&arr[i]);
  }
 
  int mode;
  float variance=0;
  //mean
  float sum=0;
  for(int arr : arr){
    sum+=arr;
  }
 float mean=sum/n;
  //mode

  int mode_count = 0;
  for(int i=0;i<n;i++){
    int temp_count=0;
    for(int j=0;j<n;j++){
      if(arr[i]==arr[j] && i!=j){
        temp_count++;
        if(temp_count>mode_count){
          mode_count=temp_count;
          mode = arr[i];
        }
      }
    }
  }
  //variance
  float numerator=0;
  for(int i=0;i<n;i++){
    numerator+=pow(arr[i]-mean,2);
  }
  variance = numerator/n;
  printf("\nMean: %2f\nMode: %d\nVariance: %2f\n",mean,mode,variance);

  return 0;
}
