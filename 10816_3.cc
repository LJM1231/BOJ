#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    int* ar = (int*)malloc(sizeof(int)*20000001);
    memset(ar, 0, sizeof(int)*20000001);
    
    int v=0;
    int n =0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &v);
        ar[v+10000000]++;
    }
    int m=0;
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &v);
        printf("%d ", ar[v+10000000]);
    }
    printf("\n");
    
    free(ar);
}