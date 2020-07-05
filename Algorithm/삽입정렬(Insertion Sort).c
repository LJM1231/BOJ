//»ğÀÔÁ¤·Ä

#include <stdio.h>

int main() {
	int arr[10] = {5,6,8,4,2,3,7,1,9,10};
	int temp;

	for (int i = 0; i < 9; i++) {
		int j = i;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}