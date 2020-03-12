#include <stdio.h>

int main(){
    int n, c;
    scanf("%d %d", &n, &c);
    
    int s[100], res=0;
    for(int i=0; i<n; i++) scanf("%d", &s[i]);
    for(int i=1; i<=c; i++){
        int idx=n;
        while(idx--){
            if(i%s[idx]==0){
                res++;
                break;
            }
        }
    }
    printf("%d", res);
}