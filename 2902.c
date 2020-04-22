#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);
    
    int len=strlen(s);
    printf("%c", s[0]);
    for(int i=1; i<len; i++){
        if(s[i]=='-') printf("%c", s[i+1]);
    }
    return 0;
}