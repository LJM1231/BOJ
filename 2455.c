#include <stdio.h>

int main() {
    int out, in;
    int res=0, max=0;
    
    for(int i=0; i<4; i++){
      scanf("%d %d", &out, &in);
        res += in;
        res -= out;
        if(max<res) max=res;
    }
    printf("%d", max);
    return 0;
}