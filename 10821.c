#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int cnt=0;
    
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] == ',') cnt++;
    }
    printf("%d", cnt+1);
}