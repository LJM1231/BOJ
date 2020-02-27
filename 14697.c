#include <stdio.h>
int main(){
    int a, b, c, n;
    int e=0;
    
    scanf("%d %d %d %d", &a, &b, &c, &n);
    
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            for(int k=0; k<50; k++){
                if(a*i==n || b*j==n || c*k==n) e=1;
                if(a*i+b*j==n || a*i+c*k==n || b*j+c*k==n) e=1;
                if(a*i+b*j+c*k==n) e=1;
            }
        }
    }
    printf("%d", e);
}