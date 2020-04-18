#include <stdio.h>
#include <string.h>

int main(){
    char str[16];
    scanf("%s", str);
    
    int sum=0;
    int i=strlen(str);
    while(i--){
        if(str[i]>='A' && str[i]<='C') sum+=3;
        else if(str[i]>='D' && str[i]<='F') sum+=4;
        else if(str[i]>='G' && str[i]<='I') sum+=5;
        else if(str[i]>='J' && str[i]<='L') sum+=6;
        else if(str[i]>='M' && str[i]<='O') sum+=7;
        else if(str[i]>='P' && str[i]<='S') sum+=8;
        else if(str[i]>='T' && str[i]<='V') sum+=9;
        else if(str[i]>='W' && str[i]<='Z') sum+=10;
    }
    printf("%d", sum);
}