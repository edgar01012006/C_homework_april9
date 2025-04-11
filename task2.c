#include <stdio.h>

int mul_digits(int num, int sum)
{
	if (num == 0)
	{
		return sum;
	}

	sum *= num % 10;
	num /= 10;

	return mul_digits(num, sum);	
}

int main()
{
	int num = 0;
	int sum = 1;

	printf("enter a number\n");
	scanf("%d", &num);

	printf("digits mul_sum = %d\n", mul_digits(num, sum));

	return 0;
}
