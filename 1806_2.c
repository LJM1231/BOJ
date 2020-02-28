#include <stdio.h>

int d[110000];
int n,s;
int getcount(int);

int main(){
    scanf("%d %d", &n, &s);
    for(int i=0; i<n; i++) scanf("%d", &d[i]);
    
    int min=0, v=0;
    for(int i=0; i<n; i++){
        if(i==0) min=getcount(i);
        else{
            v=getcount(i);
            if(v>0 && min>v) min=v;
        }
    }
    printf("%d\n", min);
}

int getcount(int idx){
    int cnt=0, sum=0;
    for(int i=idx; i<n; i++){
        cnt++;
        sum += d[i];
        if(sum>=s) return cnt;
    }
    return 0;
}