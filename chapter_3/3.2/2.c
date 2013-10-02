/**
 * dfs递归方法求电话号码能组成的单词的集合
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"

char str[100];

void bfsNumber(char *number, int bt, int len)
{
	int i;

	if (bt == len) {
		for (i = 0; i < bt; i ++)
			printf("%c", str[i]);
		printf("\n");
	} else {
		int num = *number - '0';
		if (total[num] > 0) {
			for (i = 0; i < total[num]; i ++) {
				str[bt ++] = phone[num][i];
				bfsNumber(number + 1, bt, len);
				bt --;
			}
		}
	}
}

int main(void)
{
	char number[10];
	int len;

	while (scanf("%s", number) != EOF) {
		len = strlen(number);

		bfsNumber(number, 0, len);
	}

	return 0;
}
