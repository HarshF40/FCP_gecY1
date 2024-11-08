#include<stdio.h>

int main(){
  char buffer[100];
  int count = 0;
  printf("\nInput: ");
  gets(buffer);
  for(int i=0; buffer[i]!='\0'; i++){
    if(buffer[i] != ' ' && (buffer[i+1] == ' ' || buffer[i+1] == '\0' )){
      count++;
    }
  }
  printf("\nWord Count: %d\n",count);
  return 0;
}
