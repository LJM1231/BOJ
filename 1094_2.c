#include<stdio.h>

int cut(int a[], int idx, int value){
    a[idx] = a[idx+1] = value; //절반자르기
}

int sum(int a[], int idx){
    int res=0;
    for(int i=0; i<=idx; i++) res+=a[i]; //자른 막대기 길이 합치기
    return res;
}

int main(){
    int stick[10];
    int idx=0;
    int length=64;
    int want;
    scanf("%d", &want);
    
    if(want == length) printf("1\n");
    else {
        while(length){
            length = length>>1;
            cut(stick, idx, length);
            if(sum(stick, idx)<want) idx++;
            if(sum(stick, idx)==want) break;
        }
        printf("%d\n", idx+1);
    }
}