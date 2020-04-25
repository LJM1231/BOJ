#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int num, flag, cnt=0;
    
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        flag=0;
        
        if(num==1) continue;
        for(int j=2; j<num; j++)
            if(num%j==0)
                flag=1;
            if(flag==0)
                cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}