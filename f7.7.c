// pass-by-reference
#include <stdio.h>

void cube(unsigned char *);

int main(int argc, char const *argv[])
{
	unsigned char number = 5;
	printf("number %u\n", number);
	cube(&number);
	printf("number %u\n", number);
	return 0;
}

void cube(unsigned char *p)
{
	*p = *p * *p * *p;
}