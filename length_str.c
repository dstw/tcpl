#include <stdio.h>
#include <string.h>

/* str_len: return length of s */
int str_len(char s[])
{
	int i;
	while (s[i] != '\0')
		++i;
	return i;
}

int main()
{
	int n;
	char s[50];
	strcpy(s, "This is an example");	

	n = str_len(s);
	printf("The string \"%s\" takes %d spaces\n", s, n);

	return 0;
}
