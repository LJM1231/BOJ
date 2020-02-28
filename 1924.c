#include <stdio.h>

int main(){
    int day[12] ={ 31,28,31,30,31,30,31,31,30,31,30,31};
    char date[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    
    int x=0, y=0;
    scanf("%d %d", &x, &y);
    
    int sum=0;
    for(int i=0; i<x-1; i++) sum+=day[i];
    sum += y-1; 
    
    printf("%s\n", date[sum%7]);
}