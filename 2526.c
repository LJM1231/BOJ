#include <stdio.h>
void func(int x);
int check[1001];
int n, p;

int main(){
    scanf("%d %d", &n, &p);
    
    func(n);
    int cnt=0;
    for(int i=0; i<p; i++){
        if(check[i] == 2) cnt++;
    }
    printf("%d", cnt);
}

void func(int x){
    if(check[x]==2) return;
    check[x]++;
    func(x*n%p);
}