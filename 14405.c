#include <stdio.h>
#include <string.h>

int main(){
    char s[5000];
    scanf("%s", s);
    
    int check=0, i=0;
    while(s[i]!='\0') {
        if(s[i]=='p' && s[i+1]=='i') i+=2;
        else if(s[i]=='k' && s[i+1]=='a') i+=2;
        else if(s[i]=='c' && s[i+1]=='h' && s[i+2]=='u') i+=3;
        else {check=1; break;}
    }
    
    if(check==1) printf("NO\n");
    else if(check==0) printf("YES\n");
}