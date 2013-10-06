#include <stdio.h>

int numofOne(int n)
{
	int i, j, count = 0;

	for (i = 2; i <= n; i ++) {
		j = i;

		while (j % 2 == 0) {
			count ++;
			j /= 2;
		}
	}

	return count;
}

int main(void)
{
	int n;

	while (scanf("%d", &n) != EOF) {
		printf("%d\n", numofOne(n));
	}

	return 0;
}
