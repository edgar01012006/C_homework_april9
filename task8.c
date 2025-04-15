#include <stdio.h>
#define SIZE 32

void dec_to_bin(int num,char * arr, int two_mul, int counter)
{
	if (counter == -1)
	{
		return;
	}
	if ((num & two_mul) != 0)
	{
		arr[counter] = '1';
	}
	else
	{
		arr[counter] = '0';
	}
	dec_to_bin(num, arr, two_mul * 2, --counter);
}

int main()
{
	int num = 0;
	char arr[SIZE] = { '\0' };

	printf("enter a number\n");
	scanf("%d", &num);

	dec_to_bin(num, arr, 1, 31);
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%c", arr[i]);
	}

	return 0;
}