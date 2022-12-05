#include<stdio.h>
#include<string.h>
#define SIZE 79

int main() {
	char str[SIZE];

	printf("\nNhap chuoi ban muon tinh do dai: ");
	fgets(str, SIZE, stdin);

	printf("\nChuoi ban vua nhap tu ban phim: %s", str);

	int length = strlen(str);
	printf("\nDo dai chuoi: %d Ky tu.", length -1);

	puts(" ");


	return 0;
}
