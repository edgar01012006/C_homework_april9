#include <stdio.h>

int fib(int num)
{
	if (num <= 1)
	{
		return num;
	}
	
	return fib(num - 1) + fib(num - 2);
}

int main()
{
	int num = 0;
	
	printf("enter a fib index\n");
	scanf("%d", &num);

	printf("%d fib = %d\n", num, fib(num));
	
	return 0;
}
