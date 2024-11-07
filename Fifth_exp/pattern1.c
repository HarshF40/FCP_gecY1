#include<stdio.h>

int main(){

    int terms;

    printf("\nEnter Number oF terms: ");
    scanf("%d",&terms);


    for(int i=1;i<=terms;i++){
        printf("\n");
        for(int j=1;j<=terms;j++){
            if(i+j>=terms+1){
                printf("%d",i);
            } else {
                printf(" ");
            }
        }
    }


    return 0;
}

