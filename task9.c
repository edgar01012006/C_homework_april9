#include <stdio.h>
#define SIZE 5

char uppercase(char* arr, int counter)
{
	if (counter == SIZE)
	{
		return '\0';
	}

	if (arr[counter] >= 'A' && arr[counter] <= 'Z')
	{
		return arr[counter];
	}

	return uppercase(arr, ++counter);
}

int main()
{
	char arr[SIZE] = { 0 };
	
	for (int i = 0; i < SIZE; ++i)
	{
		scanf(" %c", &arr[i]);
	}

	printf("%c\n", uppercase(arr, 0));

	return 0;
}