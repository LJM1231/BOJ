#include <iostream>
#include <cstdio>
#include <algorithm>
#define CNT 100000

using namespace std;

int mx[CNT]; //사대의 위치
pair<int, int> pos[CNT]; //동물의 위치
int m, n, l; //사대개수, 동물개수, 사정거리
int mxi, nCatch; //사대의 탐색 index, 잡을 수 있는 동물의 수

//함수 : 동물의 위치에서 사대까지의 거리
int Length(int x, int y, int mx){
    return abs(x-mx)+y;
}

int main(){
    //data scan
    scanf("%d %d %d", &m, &n, &l);
    for(int i=0; i<m; i++) scanf("%d", &mx[i]);
    for(int i=0; i<n; i++)
        scanf("%d %d", &pos[i].first, &pos[i].second);
        
    //data sort
    sort(pos, pos+n);
    sort(mx, mx+m);
    
    //analyze
    for(int i=0; i<n; i++){
        while(mxi != m-1 && mx[mxi+1] < pos[i].first){
            mxi++;
        }//좌측 사대 위치 인덱스 찾기
        
        if(Length(pos[i].first, pos[i].second, mx[mxi]) <= l){
            nCatch++;
        }//좌측 사대에서 잡을 수 있는가?
        else if((mxi!=m-1) &&(Length(pos[i].first, pos[i].second, mx[mxi+1]) <= l)){
            nCatch++;
        }//우측 사대에서 잡을 수 있는가?
    }
    printf("%d\n", nCatch);
}