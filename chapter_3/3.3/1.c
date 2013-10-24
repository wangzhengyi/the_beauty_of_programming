#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define min(a, b) (a < b ? a : b)

/**
 * 递归计算字符串之间距离
 *
 */
int calD(char *as, int bta, int eda, char *bs, int btb, int edb)
{
	if (bta > eda) {
		if (btb > edb) {
			return 0;
		} else {
			return edb - btb + 1;
		}
	}

	if (btb > edb) {
		if (bta > eda) {
			return 0;
		} else {
			return eda - bta + 1;
		}
	}

	if (as[bta] == bs[btb]) {
		return calD(as, bta + 1, eda, bs, btb + 1, edb);
	} else {
		int t1, t2, t3;
		t1 = calD(as, bta + 1, eda, bs, btb, edb);
		t2 = calD(as, bta, eda, bs, btb + 1, edb);
		t3 = calD(as, bta + 1, eda, bs, btb + 1, edb);

		return min(min(t1, t2), t3) + 1;
	}

}


int main(void)
{
	char as[N], bs[N];
	int dis;

	while (scanf("%s %s", as, bs) != EOF) {
		dis = calD(as, 0, strlen(as) - 1, bs, 0, strlen(bs) - 1);
		printf("%d\n", dis);
	}

	return 0;
}
