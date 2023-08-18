#include <stdio.h>
/**
* Fizz- buzz: print buzz if multiple of 5 , fizz if multiple of 3.
* main - entry
* Return: 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0 && (x % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
