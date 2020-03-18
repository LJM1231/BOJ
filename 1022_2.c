#include <stdio.h>
#include <stdlib.h> //abs()

int length=0;

int numlen(int a){
    int cnt=0;
    while(a) {cnt++; a/=10;}
    return cnt;
}

int get(int c, int r){
    int res=1;
    
    //horizontal
    int h=(c>0) ? 1:5;
    //horizontal value
    int hv = abs(c);
    for(int i=0; i<hv; i++) res+=h+8*i;
    
    //vertical
    int v=(r>0) ? 7:3;
    int vv = abs(r);
    int add = -1*(c/abs(c))*(r/abs(r));
    
    if(h==1 && v==7){
        for(int i=0; i<vv; i++){
            if(i<hv-1) res+=add;
            else res += v+8*i;
        }
    }
    else {
        for(int i=0; i<vv; i++){
            if(i<hv) res+= add;
            else res+= v+8*i;
        }
    }
    
    if(length<numlen(res)) length = numlen(res);
    return res;
}

int res[50][5];
int main(){
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    
    for(int r=r1; r<=r2; r++){
        for(int c=c1; c<=c2; c++)
            res[r-r1][c-c1] = get(c, r);
    }
    for(int r=0; r<=r2-r1; r++){
        for(int c=0; c<=c2-c1; c++){
            printf("%*d ", length, res[r][c]);
        }
        printf("\n");
    }
}