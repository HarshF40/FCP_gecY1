#include<stdio.h>

typedef struct{
    char* name;
    unsigned int age;
    unsigned int test_matches;
    float avg_runs;
}player;

int main(){
    player p1 = {"Ankur",43,1,2};
    
    printf("\nName: %s\nAge: %u\nTest Matches played: %u\nAvergae Runs: %.2f\n",p1.name,p1.age,p1.test_matches,p1.avg_runs);

    return 0;
}