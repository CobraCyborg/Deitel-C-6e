// duplicate elimination
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numbers[20] = { 0 };
	int number;
	int i;
	int j;
	int duplicated;

	for (i = 0; i < sizeof numbers / sizeof numbers[0]; ++i)
	{
		duplicated = 0;

		scanf("%d", &number);

		for (int j = 0; j < sizeof numbers / sizeof numbers[0]; ++j)
		{
			if (number == numbers[j])
				duplicated = 1;
		}

		numbers[i] = number;

		if (duplicated == 0)
			printf("\n%d\n\n", numbers[i]);
		else
			printf("\n");
	}

	return 0;
}