#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

void print(int day[], char date[][4], int x, int y){
    int sum=0;
    for(int i=0; i<x-1; i++) sum+= day[i];
    sum += y-1;
    
    printf("%s\n", date[sum%7]);
}

int main(){
    int day[SIZE] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char date[][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    
    int x=0, y=0;
    scanf("%d %d", &x, &y);
    
    print(day, date, x, y);
    
    return 0;
}