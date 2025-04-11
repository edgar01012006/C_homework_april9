#include <stdio.h>

void print(int num)
{
	if (num == -1)
	{
		return;
	}

	printf("%d ", num);
	--num;

	return print(num);
} 

int main()
{
	int num = 0;
	
	printf("enter a number\n");
	scanf("%d", &num);

	print(num);

	return 0;
}
