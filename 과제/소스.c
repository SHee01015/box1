#include <stdio.h>

int main(void)
{
	int a, b, c;
	b = 75;
	c = 0;
	for (;;)
	{
		printf("������ �����Ͽ� ���ÿ�:");
		scanf_s("%d", &a);
		if (a > b)
			printf("������ ������ �����ϴ�.\n");
		else if (a < b)
			printf("������ ������ �����ϴ�.\n");
		else if (a = b) {
			printf("�����մϴ�");
			break;
		}
		c += 1;
	}
	printf("  �õ�Ƚ��=%d", c);
}
