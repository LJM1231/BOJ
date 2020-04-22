#include <stdio.h>
#include <string.h>

int main(){
    char ah[1000];
    scanf("%s", ah);
    
    int len=strlen(ah);
    scanf("%s", ah);
    if(len<strlen(ah)) printf("no\n");
    else printf("go\n");
    
    return 0;
}