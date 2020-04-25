#include <stdio.h>
#include <string.h>

int main(){
    char s[101]={0};
    char d[101]={0};
    
    int idx=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++){
        if(s[i]>='A' && s[i]<='Z') d[idx++] = s[i];
    }
    printf("%s", d);
}