#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	for (int num1 = 2 ; num1 <= 9; num1++) {
		printf(" %d단",num1);
		printf("\n"); // 이 코드가 없으면 단과 첫 번째 곱셈식이 한 줄로 출력됨
		for (int i = 1; i <= 9; i++) {
			
			printf(" %d * %d = %d    ", num1, i, num1 * i); // \t는 tab 역할
		}
		printf("\n"); // 이 코드가 없으면 다음 단이 현재 단 뒤에 붙어버림
	}
	return 0;
}