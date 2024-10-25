#include<stdio.h>
#include<string.h>

int main(){
  char buffer[100];
  printf("\nInput: ");
  gets(buffer);
  int i = 0;
  while(buffer[i] != '\0'){
    i++;
  }
  printf("Length: %d\n",i);
  return 0;
}
