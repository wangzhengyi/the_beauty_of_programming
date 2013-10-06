#include <stdio.h>
#include <stdlib.h>

int numZeros(int n)
{
	int i, j, count = 0;

	for (i = 5; i <= n; i ++) {
		j = i;
		while (j % 5 == 0) {
			count ++;
			j /= 5;
		}
	}

	return count;
}


int main(void)
{
	int n;

	while (scanf("%d", &n) != EOF) {
		printf("%d\n", numZeros(n));	
	}

	return 0;
}
