#include <stdio.h>
#include <string.h>

int main(){
    char n[101];
    
    while(gets(n)!='\0'){
        int length=strlen(n);
        
        int str[4]={0};
        for(int i=0; i<length; i++){
            if(n[i]>='a' && n[i]<='z') str[0]++;
            else if(n[i]>='A' && n[i]<='Z') str[1]++;
            else if(n[i]>='0' && n[i]<='9') str[2]++;
            else if(n[i] == ' ') str[3]++;
        }
        for(int i=0; i<4; i++) printf("%d ", str[i]);
        printf("\n");
    }
    return 0;
}