#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 80

bool checkSymmetricString(char* str) {

	int size = strlen(str) - 1;

	for (int  i = 0; i < size; i++)
	{
		if (str[i] != str[size - 1 - i]) {
			return false;
		}
	}

	return true;
}

int main() {

	char str[SIZE];

	printf("\nNhap chuoi: ");
	
	fgets(str, 79, stdin);

	printf("\nChuoi ban vua nhap tu ban phim: %s \n" ,str );
	
	bool isSymmetricString = checkSymmetricString(str);

	if (isSymmetricString == true) {

		printf("\nDay la chuoi doi xung\n");
	}
	else {
		printf("\nDay la chuoi khong doi xung.\n");
	}
	return 0;
}
