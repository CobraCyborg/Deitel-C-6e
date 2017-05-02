// Copy string using index and pointer notaions
#include <stdio.h>

void copy1(char *s1, const char *s2);
void copy2(char *s1, const char *s2);

int main(int argc, char const *argv[])
{
	char str1[10];
	char *str2 = "Hello";
	char str3[10];
	char str4[] = "Good Bye";

	copy1(str1, str2);
	printf("str1 = %s\n", str1);

	copy2(str3, str4);
	printf("str3 = %s\n", str3);

	return 0;
}

void copy1(char *s1, const char *s2)
{
	size_t i;
	for(i = 0; (s1[i] = s2[i]) != '\0'; i++);
}

void copy2(char *s1, const char *s2)
{
	for( ; (*s1 = *s2) != '\0'; s1++, s2++);
}