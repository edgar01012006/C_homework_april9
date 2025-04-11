#include <stdio.h>

int digits_sum(int num, int sum)
{
	if (num == 0)
	{
		return sum;
	}
	sum += num % 10;
	num /= 10;
	return digits_sum(num, sum);
}

int main()
{
	int num = 0;

	printf("enter a number\n");
	scanf("%d", &num);

	printf("digits_sum = %d", digits_sum(num, 0));

	return 0;
}