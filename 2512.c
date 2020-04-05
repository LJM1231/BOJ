#include <stdio.h>

int main(){
    int n, max=0, arr[10000], m;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(max<arr[i]) max=arr[i];
    }
    scanf("%d", &m);
    
    int mid, low=0, high=max;
    while(low<=high){
        mid =(low+high)/2;
        int sum=0;
        for(int i=0; i<n; i++){
            if(arr[i]>mid) sum+= mid;
            else sum+=arr[i];
        }
        if(sum>m) high=mid-1;
        else low=mid+1;
    }
    printf("%d", high);
}