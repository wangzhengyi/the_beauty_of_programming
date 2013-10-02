/**
 * 求二进制中1的个数
 */

#include <stdio.h>
#include <stdlib.h>

int calOne(int num)
{
	int count = 0;

	while (num) {
		count ++;
		num = num & (num - 1);
	}

	return count;
}

int main(void)
{
	int num;

	while (scanf("%d", &num) != EOF) {
		printf("%d\n", calOne(num));
	}

	return 0;
}
