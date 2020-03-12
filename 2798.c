#include <stdio.h>

int main(){
    int n, m, sum=0, res=0, num[101]={0};
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i!=j && j!=k&& i!=k){
                    int sum=num[i]+num[j]+num[k];
                    if(sum<=m && res<sum) res=sum;
                }
            }
        }
    }
    printf("%d", res);
}