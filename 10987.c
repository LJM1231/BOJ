#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    scanf("%s", str);
    
    int cnt=0;
    int len=strlen(str);
    while(len--){
        int i=len;
        if(str[i]=='a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u') cnt++;
    }
    printf("%d", cnt);
}