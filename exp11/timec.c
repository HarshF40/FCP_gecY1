#include<stdio.h>

typedef struct {
    int sec;
    int min;
    int hour;
}time;

int main(){
    time t1 = {50,40,2};
    time t2 = {30,40,4};
    time t3;
    
    int sec = t1.sec + t2.sec;
    int min = t1.min + t2.min + sec/60;
    int hour = t1.hour + t2.hour + min/60;
    
    t3.sec = sec%60;
    t3.min = min%60;
    t3.hour = hour;
    
    printf("%d:%d:%d\n",t1.hour,t1.min,t1.sec);
    printf("%d:%d:%d\n",t2.hour,t2.min,t2.sec);
    printf("%d:%d:%d",t3.hour,t3.min,t3.sec);
    return 0;
}