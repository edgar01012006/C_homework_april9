#include <stdio.h>
#define SIZE 5

int max_element(int* arr, int max, int cnt)
{
	if (cnt == SIZE)
	{
		return max;
	}

	if (arr[cnt] > max)
	{
		max = arr[cnt];
	}

	return max_element(arr, max, ++cnt);
}

int min_element(int* arr, int min, int cnt)
{
	if (cnt == SIZE)
	{
		return min;
	}

	if (arr[cnt] < min)
	{
		min = arr[cnt];
	}

	return min_element(arr, min, ++cnt);
}

int main()
{
	int arr[SIZE] = { 0 };

	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &arr[i]);
	}

	printf("max = %d\n", max_element(arr, arr[0], 1));
	printf("min = %d\n", min_element(arr, arr[0], 1));

	return 0;
}