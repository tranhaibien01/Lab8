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

	printf("\nEnter the string: ");
	
	fgets(str, 79, stdin);

	printf("\nThe string that you just enter from keyboard: %s \n" ,str );
	
	bool isSymmetricString = checkSymmetricString(str);

	if (isSymmetricString == true) {

		printf("\nThe string is symmetric\n");
	}
	else {
		printf("\nThe string is not symmetric.\n");
	}
	return 0;
}
