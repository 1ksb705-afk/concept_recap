#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1;
	while (1) {
		
		printf("2~9 사이의 정수 입력: ");
		scanf("%d", &num1);
		if (num1 >= 2 && num1 <= 9) {
			break;
		}
		else {
			printf("정수가 아니거나 범위값을 벗어났습니다. 재입력하십시오.\n");
		}
	}
		for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num1, i, num1 * i);
	}


	return 0;
}