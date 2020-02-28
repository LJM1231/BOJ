#include <stdio.h>

//투포인터 사용

int min(int a, int b){
    return (a>b) ? b:a;
}

int main(){
    int n, goal;
    scanf("%d %d", &n, &goal);
    
    int v[n];
    for(int i=0; i<n; i++) scanf("%d", &v[i]);
    
    int sum=0, res=100000, rear=0;
    
    //front를 증가시키며 전체 탐색
    for(int front=0; front<n; front++){
        sum += v[front];
        if(sum>=goal){
            //목표에 부합되는 가장 짧은 범위의 길이 확인
            res = min(res, front-rear+1);
            
            //rear지점도 뒤따라 가며 범위의 합을 확인
            for(int i=rear; i<front; i++){
                sum -= v[rear];
                rear++;
                if(sum<goal) break;
                res=min(res, front-rear+1);
            }
        }
    }
    printf("%d", (res<100000) ? res:0);
}