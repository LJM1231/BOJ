#include <stdio.h>
#include <string.h>

int main(){
    int n=2;
    int len[2];
    
    while(n--){
        char s[1001]={0};
        scanf("%s", s);
        len[n] = strlen(s);
    }
    printf((len[0]<=len[1]) ? "go" : "no");
}