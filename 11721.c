#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);
    
    int len=strlen(s);
    printf("%c", s[0]);
    for(int i=1; i<len; i++){
        if(i%10 == 0) printf("\n");
        printf("%c", s[i]);
    }
}