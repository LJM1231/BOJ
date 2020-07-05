//다이나믹 프로그래밍

//메모이제이션 기법

#include <stdio.h>

int d[100];

int fibonacci(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x] = fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
	printf("%d", fibonacci(10));
}