// Using operator sizeof to determine standard data type size
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;
	int array[20];
	int *ptr = array;

	printf("    sizeof c = %u\tsizeof(char) = %u\n", sizeof c, sizeof(char));
	printf("    sizeof s = %u\tsizeof(short) = %u\n", sizeof s, sizeof(short));
	printf("    sizeof i = %u\tsizeof(int) = %u\n", sizeof i, sizeof(int));
	printf("    sizeof l = %u\tsizeof(long) = %u\n", sizeof l, sizeof(long));
	printf("   sizeof ll = %u\tsizeof(long long) = %u\n", sizeof ll, sizeof(long long));
	printf("    sizeof f = %u\tsizeof(float) = %u\n", sizeof f, sizeof(float));
	printf("    sizeof d = %u\tsizeof(double) = %u\n", sizeof d, sizeof(double));
	printf("   sizeof ld = %u\tsizeof(long double) = %u\n", sizeof ld, sizeof(long double));
	printf("sizeof array = %u\n", sizeof array);
	printf("  sizeof ptr = %u\n", sizeof ptr);

	return 0;
}