#include <stdio.h>
#define SIZE 5

void sort_array(int* arr)
{
	int swap = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = i; j < SIZE; ++j)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
}

void print_array(int* arr, int counter)
{
	if (counter == SIZE)
	{
		return;
	}
	
	printf("arr[%d] = %d\n", counter, arr[counter]);
	print_array(arr, ++counter);
}

int main()
{
	int arr[SIZE] = { 0 };

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	sort_array(arr);
	print_array(arr, 0);

	return 0;
}