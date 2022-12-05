#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 1000, b = 2000;
	int *ptr;
	swap(&a, &b);
	printf("Gia tri cua 2 bien sau khi hoan doi gia tri: %d %d", a, b);
	
	
	printf("\nDia chi cua bien a: %d", &a);
	printf("\nDia chi cua bien b: %d", &a);
	return 0;
}
