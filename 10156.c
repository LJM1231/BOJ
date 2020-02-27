#include <stdio.h>

int main()
{
    int k, n, m;
    int res=0;
    
    scanf("%d %d %d", &k, &n, &m);
    
    if((k*n)> m){
        res = (k*n)-m;
        printf("%d", res);
    }
    
    else{
        printf("0");
    }
    
    return 0;
}