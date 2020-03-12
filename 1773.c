#include <stdio.h>

int sum[2000001]={0};
    
int main(){
    int n, c;
    int cnt=0;
    scanf("%d %d", &n, &c);
    
    int a[101]={0};
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    
    for(int i=0; i<n; i++){
        for(int j=a[i]; j<=c; j+=a[i]) sum[j]=1;
    }
    
    for(int i=0; i<=c; i++){
        if(sum[i]==1) cnt++;
    }
    printf("%d", cnt);
}