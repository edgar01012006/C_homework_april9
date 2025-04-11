#include <stdio.h>

void print(int num, int counter)
{
	if (num < counter)
	{
		return;	
	}
	
	printf("%d ", counter);
	++counter;
	
	return print(num, counter);
}

int main()
{
	int num = 0;	

	printf("enter a number\n");
	scanf("%d", &num);

	print(num, 0);

	return 0;
}
