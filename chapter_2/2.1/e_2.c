/**
 * 给定两个正整数A和B，问把A变成B需要改变多少位
 *
 * 思路：先异或，在求异或后1的数目
 *
 */

#include <stdio.h>

int calOne(int n)
{
	int count = 0;

	while (n) {
		count ++;
		n &= (n - 1);
	}

	return count;
}

int main(void)
{
	int a, b, c, diff;

	while (scanf("%d %d", &a, &b) != EOF) {
		c = a ^ b;

		diff = calOne(c);

		printf("%d\n", diff);
	}

	return 0;
}
