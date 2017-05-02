#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sales;
	int i;
	int salary;
	int salaries[9] = { 0 };

	for (i = 0; i < 20; ++i)
	{
		sales = rand() % 10000;
		//printf("%d\n", sales);
		salary = sales / 100 * 9 + 200;
		//printf("%d\n", salary);
		if (salary < 300)
			++salaries[0];
		if (salary < 400)
			++salaries[1];
		if (salary < 500)
			++salaries[2];
		if (salary < 600)
			++salaries[3];
		if (salary < 700)
			++salaries[4];
		if (salary < 800)
			++salaries[5];
		if (salary < 900)
			++salaries[6];
		if (salary < 1000)
			++salaries[7];
		if (salary > 1000)
			++salaries[8];
	}

	for (i = 0; i < sizeof salaries / sizeof salaries[0]; ++i)
	{
		printf("%d\n", salaries[i]);
	}
	return 0;
}