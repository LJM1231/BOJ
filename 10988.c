#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    scanf("%s", str);
    
    int len=strlen(str);
    int test=0;
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-i-1])
            test=-1;
    }
    if(test==-1) printf("0\n");
    else printf("1\n");
    
    return 0;
}