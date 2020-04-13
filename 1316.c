#include <stdio.h>
#include <string.h>

int select(char a[], int len){
    int key=0;
    
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(a[i]==a[j]){
                key=j-i;
                
                if(key>1)
                    if(a[j-1] != a[j]) return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    
    char s[100];
    int sum=0;
    
    for(int i=0; i<n; i++){
        scanf("%s", s);
        sum += select(s, strlen(s));
    }
    printf("%d", sum);
}