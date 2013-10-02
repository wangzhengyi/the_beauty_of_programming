#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"

int answer[100] = {0};

void directNumber(char *number, int len)
{
	int i, k, index;
	memset(answer, 0, sizeof(answer));

	while (1) {
		for (i = 0; i < len; i ++) {
			index = *(number + i) - '0';
			printf("%c", phone[index][answer[i]]);
		}
		printf("\n");

		k = len - 1;

		while (k >= 0) {
			if (answer[k] < total[*(number + k) - '0'] - 1) {
				answer[k] ++;
				break;
			} else {
				answer[k] = 0;
				k --;
			}
		}
		
		if (k < 0)	break;
	}
}


int main(void)
{
	char number[100];
	int len;

	while (scanf("%s", number) != EOF) {
		len = strlen(number);

		directNumber(number, len);
	}

	return 0;
}
