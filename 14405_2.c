#include <stdio.h>
#include <string.h>

int main(){
    char s[5001]={0};
    scanf("%s", s);
    
    int res=1;
    for(int i=0; i<strlen(s); i++){
        if(memcmp(s+i, "pi", 2) == 0) i++;
        else if(memcmp(s+i, "ka", 2) ==0) i++;
        else if(memcmp(s+i, "chu", 3) ==0) i+=2;
        else {
            res=0;
            break;
        }
    }
    printf((res) ? "YES" : "NO");
}