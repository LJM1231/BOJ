#include <stdio.h>
#include <string.h>

int main(){
    char s[101]={0};
    scanf("%[^\n]", s);
    
    int n=strlen(s);
    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i] <= 'z')
            s[i]='a' + (s[i]-'a'+13) %26;
        else if(s[i]>='A' && s[i]<='Z')
            s[i] = 'A' + (s[i]-'A'+13) %26;
    }
    printf("%s", s);
}