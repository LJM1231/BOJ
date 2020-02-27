#include <stdio.h>

int main(void){
    int a[4];
    int zero=0, one=0;
    
    for(int i=0; i<3; i++){
        zero=0; one=0;
        for(int j=0; j<4; j++){
            scanf("%d", &a[j]);
            if(a[j]==0) zero++;
            else if(a[j]==1) one++;
        }
        if(zero==1 && one==3) printf("A\n");
    else if(zero==2 && one==2) printf("B\n");
    else if(zero==3 && one==1) printf("C\n");
    else if(zero==4 && one==0) printf("D\n");
    else if(zero==0 && one==4) printf("E\n");
    }
    
    
    return 0;
}