#define _CRT_SECURE_NO_WARNINGS 소스 전처리기에 입력
#include <stdio.h>

int main()
{
	int num;
	printf("숫자를입력하세용:");
	scanf("%d", &num);

	if (num >= 19) {
		printf("성인임\n");
	}
	else {
		printf("미성년임\n");
	}
	return 0;
}
