#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%s", str);
    
    int len=strlen(str);
    
    for(int i=0; i<len; i++){
        if(str[i]-3<65){
            str[i]=str[i]+23;
        }
        else str[i] -= 3;
    }
    printf("%s", str);
}