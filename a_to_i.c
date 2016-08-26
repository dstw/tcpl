#include <stdio.h>
#include <string.h>

/* a_to_i:	convert s to integer */
int a_to_i(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main()
{
	int x;
	char s[50];
	strcpy(s, "914573");

	x = a_to_i(s);
	printf("The string \"%s\" becomes int %d \n", s, x);

	return 0;
}
