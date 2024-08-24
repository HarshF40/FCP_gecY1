#include<stdio.h>

int main(){
    char val;

    printf("\nEnter a letter from alphabet: ");
    scanf("%c",&val);

    if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u')
        printf("\nVowel!");
    else
        printf("\nConsonant!");

    return 0;
}

