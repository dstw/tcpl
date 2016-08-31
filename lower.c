#include <stdio.h>
#include <string.h>

/* lower:	convert c to lower case; ASCII only */

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int main()
{
	int i;
	char s[100];
	char s2[100];
	strcpy(s, "Some text books");

	for(i = 0; s[i] == '\0'; ++i)
		lower(s2[i]);
	printf("The string \"%s\" becomes \"%s\" \n", s, s2);

	return 0;
}
