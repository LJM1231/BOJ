#include<stdio.h>

int main (){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int A[]={a,b,c};
	for (int i=0;i<2;i++){
    	for(int i=0;i<2;i++)
    	{
    		if(A[i]<A[i+1])
    		{
    			int swp=A[i];
    			A[i]=A[i+1];
    			A[i+1]=swp;
    		}
        }
	}
	printf("%d",A[1]);
    return 0;
}