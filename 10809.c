#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);
    
    for(char c='a'; c<='z'; c++){
        int cnt = -1;
        for(int i=0; i<strlen(s); i++){
            if(s[i]==c){
                cnt=i;
                break;
            }
        }
        printf("%d ", cnt);
    }
    return 0;
}