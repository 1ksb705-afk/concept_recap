#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int age;
	printf("나이를 입력하세요:  ");
	scanf("%d", &age);

	if (age > 20) {
		printf("성인입니다.");
	}
	else if (age < 8) {
		printf("어린이입니다.");
	}
	else {
		printf("청소년입니다.");
	}

}