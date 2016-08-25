#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else	/* found match */
			return mid;
	}
	return -1;	/* no match */
}

int main()
{
	int i;
	int digits[10];
	
	for (int i = 0; i < 10; i++) {
		digits[i] = i + 1;
	}

	digits[3] = 8;
	
	for (int i = 0; i < 10; i++) {
		printf("%i ", digits[i]);
	}

	printf("\n%i \n", binsearch(8, digits, 0));

	return 0;
}
