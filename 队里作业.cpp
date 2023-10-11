#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int cnt[n] = {};
	
	char ch[n][8][8];
	
	int bu;
	for (bu = 0; bu < n; bu++) // 记录这是第几次输入
	{
		for (int i = 0; i < 8; i++) {
			scanf("%8s", ch[bu][i]);
		}
	}
	
	for (bu = 0; bu < n; bu++) {
		for (int qian = 0; qian < n; qian++) {
			if (qian != bu && memcmp(ch[bu], ch[qian], sizeof(ch[bu])))
				cnt[bu]++;
		}
	}
	
	for (bu = 0; bu < n;bu++) {
		printf("%d\n", cnt[bu]);
	}
	return 0;
}

