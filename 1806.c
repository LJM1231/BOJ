#include <stdio.h>

int main(void) {
    long long sum[100001]; 
    int arr[100001];
    int N, num, min = 100000;
    long long S;
    int i;
    
    scanf("%d %lld", &N, &S);
 
    for (i = 1; i <= N; i++) {
        scanf("%d", &num);
        arr[i] = -1;
        sum[i] = sum[i - 1] + num;
    }
 
    for (int i = 1; i <= N; i++) {
        if (sum[i] >= S) {
            for (int j = i-1; j >= 0; j--) {
                if (sum[i] - sum[j] >= S) {
                    arr[i] = i - j;
                    break;
                }
            }
        }
    }
    
    for (i = 1; i <= N; i++) {
        if (arr[i] < min && arr[i] != EOF) {
            min = arr[i];
        }
    }
 
    if (min == 100000) {
        printf("0");
    }
    else {
        printf("%d", min);
    }
 
    return 0;
}
