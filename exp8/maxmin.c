#include<stdio.h>

int main() {
int arr[4][4]={1,4,22,45,23,4,3,9,99,65,73,22,5,0,11,8};
int max;

for(int i=0;i<4;i++) {
    max=arr[i][0];
    for(int j=0;j<4;j++) {
        if(arr[i][j]>max)
            max=arr[i][j];
    }
    printf("\n Row %d ; Max=%d \n",i+1,max);
}

for(int j=0;j<4;j++) {
    max=arr[0][j];
    for(int i=0;i<4;i++) {
        if(arr[i][j]>max)
            max=arr[i][j];
    }
printf("\n column %d ; max number=%d \n",j+1,max);
}
    return 0;
}