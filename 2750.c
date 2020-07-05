#include <stdio.h>

int main() {
	int n, temp;
	int arr[1001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}