#include <stdio>
void print_diagonal(int a);

int main(void)
{
	print_diagonal(10);
	return (0);
}
void print_diagonal(int a)
{
	int i;

	i = 1;
	while (i <= a)
	{
		for (int k = 0; k <= a-i; k++)
		{
			if (k != 0)
			{
				printf("h");
			}
		}
		printf("\\\n");
		i++;
	}
:}
