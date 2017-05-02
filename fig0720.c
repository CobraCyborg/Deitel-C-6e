// Using subscripting and pointer notations with arrays.
#include <stdio.h>
#define SIZE 4

int main(int argc, char const *argv[])
{
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;
	size_t i;
	size_t offset;

	puts("Array b printed with:\nArray subscript notation");

	for (i = 0; i < SIZE; ++i)
	{
		printf("b[%u] = %d\n", i, b[i]);
	}

	puts("\nPointer/offset notation where\nthe pointer is the array name");

	for (offset = 0; offset < SIZE; ++offset)
	{
		printf("*(b + %u) = %d\n", offset, *(b + offset));
	}

	puts("\nPointer subscript notation");

	for (i = 0; i < SIZE; ++i)
	{
		printf("bPtr[%u] = %d\n", i, bPtr[i]);
	}

	puts("\nPointer/offset notation");

	for (offset = 0; offset < SIZE; ++offset)
	{
		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
	}

	return 0;
}