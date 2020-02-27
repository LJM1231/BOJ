#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<=2*n-2; i++){
		if(i%2==0){
			for(int j=0; j<i/2; j++)
				printf("* ");
			for (int j=0; j<4*n-3-2*i; j++)
				printf("*");
			for (int j=0; j<i/2; j++)
				printf(" *");
		}
		else{
			for(int j=0; j<i/2+1; j++)
				printf("* ");
			for(int j=0; j<4*n-5-2*i; j++)
				printf(" ");
			for(int j=0; j<i/2+1; j++)
				printf(" *");
		}
		printf("\n");
	}
	
	for(int i=2*n-3; i>=0; i--)	{
		if(i%2==0){
			for(int j=0; j<i/2; j++)
				printf("* ");
			for(int j=0; j<4*n-3-2*i; j++)
				printf("*");
			for(int j=0; j<i/2; j++)
				printf(" *");
		}
		else{
			for(int j=0; j<i/2+1; j++)
				printf("* ");
			for(int j=0; j<4*n-5-2*i; j++)
				printf(" ");
			for(int j=0; j<i/2+1; j++)
				printf(" *");
		}
		printf("\n");
	}
}