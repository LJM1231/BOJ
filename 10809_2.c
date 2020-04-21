#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s", s);
    
    int cnt[26] = {0};
    int n = strlen(s);
    for(int i=0; i<n; i++){
        int idx=s[i]-'a';
        if(cnt[idx]==0) cnt[idx]=i+1;
    }
    for(int i=0; i<26; i++) printf("%d ", cnt[i]-1);
}