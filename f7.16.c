#include <stdio.h>
#define SIZE 20

size_t GetElementSize(float *ptr);

int main(int argc, char const *argv[])
{
	float array[SIZE];
	printf("GetElementSize(array) \t%u\n", GetElementSize(array));
	printf("sizeof(array) \t%u\n", sizeof(array));
	return 0;
}

size_t GetElementSize(float *ptr)
{
	return sizeof(ptr);
}