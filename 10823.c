#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[10001];
    int sum=0, num;
    char s[10001];
    
    while(scanf("%s", s) != EOF){
        strcat(str, s);
    }
    
    char *ptr = strtok(str, ",");
    while(ptr != NULL){
        sum += atoi(ptr);
        ptr = strtok(NULL, ",");
    }
    printf("%d", sum);
}