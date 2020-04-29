#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    char k[70];
    for(int i=0; i<n; i++){
        scanf("%s", k);
        int len=strlen(k);
        
        if(k[len-1]%2==0) printf("even\n");
        else if(k[len-1]%2==1) printf("odd\n");
    }
    return 0;
}