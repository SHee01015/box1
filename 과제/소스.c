#include <stdio.h>

int main(void)
{
	int a, b, c;
	b = 75;
	c = 0;
	for (;;)
	{
		printf("정답을 추측하여 보시오:");
		scanf_s("%d", &a);
		if (a > b)
			printf("제시한 정수가 높습니다.\n");
		else if (a < b)
			printf("제시한 정수가 낮습니다.\n");
		else if (a = b) {
			printf("축하합니다");
			break;
		}
		c += 1;
	}
	printf("  시도횟수=%d", c);
}
