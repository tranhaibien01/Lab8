#include<stdio.h>
#include<stdlib.h>

void getElementArray(const int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", array + i);
	}

}

void showElementArray(const int* const array, const int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}

}

int main() {
	int* array;
	int size;
	printf("\nNhap kich thuoc cua mang: ");
	scanf("%d", &size);

	array = (int*)malloc(size * sizeof(int));
	getElementArray(array, size);
	printf("\nTat ca cac phan tu mang: ");
	showElementArray(array, size);

	free(array);
	return 0;
}
