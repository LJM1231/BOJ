#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    scanf("%s", str);
    
    int sum=10;
    for(int i=1; i<strlen(str); i++){
        if(str[i-1]==str[i]) sum+=5;
        else if(str[i-1] != str[i]) sum+=10;
    }
    printf("%d", sum);
}