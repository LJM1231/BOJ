#include <stdio.h>
int main(){
	int K, C, M, N;  
	
	scanf("%d %d", &K, &C);
	
	while (C--){
		int X = 1;
		
		scanf("%d %d", &M, &N);
		if (M > N) if (K - M + N + 2 < M) X = 0;
		if (M < N) if (K - N + M + 1 < N) X = 0;
		printf("%d\n", X);
	}
	return 0;
}