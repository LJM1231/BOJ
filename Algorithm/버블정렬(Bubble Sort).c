//»ğÀÔÁ¤·Ä

#include <stdio.h>

int main() {
	//int arr[10] = { 5,3,4,8,6,2,1,7,9,10 };
	int temp;

	/*for (int i = 0; i < 10; i++) {
		int j = i;
		while (arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}*/

	int n;
	int arr[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		while (arr[i] > arr[i + 1]) {
			temp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = temp;
		}
		printf("%d ", arr[i]);
	}

	return 0;
}