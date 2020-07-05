#include <stdio.h>
#include <algorithm>
#define MAX 1000000

int n;
int arr[MAX];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	std::sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}