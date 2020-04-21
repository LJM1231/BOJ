#include <stdio.h>
#include <string.h>

int getTime(char ch){
    if(ch>='W') return 10;
    else if(ch >= 'T') return 9;
    else if(ch >= 'P') return 8;
    else if(ch >= 'M') return 7;
    else if(ch >= 'J') return 6;
    else if(ch >= 'G') return 5;
    else if(ch >= 'D') return 4;
    else if(ch >= 'A') return 3;
    
}

int main(){
    char ch[15];
    scanf("%s", ch);
    
    int sum=0, len=strlen(ch);
    while(len--) {sum+=getTime(ch[len]);}
    printf("%d", sum);
}