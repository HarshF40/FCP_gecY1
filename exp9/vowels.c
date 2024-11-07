#include<stdio.h>
#include<ctype.h>

int main(){
  char buffer[100];
  char vowels[5] = "aeiou";
  int count = 0;
  printf("\nInput: ");
  gets(buffer);
  for(int i=0; buffer[i]!='\0'; i++){
    buffer[i] = tolower(buffer[i]);
    for(int j = 0; j<5; j++){
      if(vowels[j] == buffer[i])
        count++;
    }
  }
  printf("\nNumber of vowels: %d\n",count);
  return 0;
}
