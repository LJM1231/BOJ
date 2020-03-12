#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int v[101], i;
    for(i=0; i<n; i++) scanf("%d", &v[i]);
    
    int ans=0;
    while(n--){
        if(n==0) break;
        
        while(v[n] <= v[n-1]) {
            v[n-1]--;
            ans++;
        }
    }
    printf("%d", ans);
}