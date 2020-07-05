//»ğÀÔÁ¤·Ä

#include <stdio.h>

int n;
int arr[101];

int main() {
	int temp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && arr[j-1] > arr[j]) {
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
		for (int j = 0; j <= i; j++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	return 0;
}