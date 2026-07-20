#include <stdio.h>
#include <string.h>
//#define SIZE	5

void func(int(*pscore), int size);
void prt(int(*pscore), int size);
void avg(int(*pscore), int size);
void max(int *pscore, int size);
void min(int(*pscore), int size);

int main() {

	int menu;
	int score[5];
	int size = sizeof(score) / sizeof(score[0]);

	while (1) {
		printf("\n\n======================== 학생 성적 관리===========================\n\n");
		printf("1. 점수 입력 \n");
		printf("2. 점수 츨력 \n");
		printf("3. 평균 출력 \n");
		printf("4. 최고 점수 출력 \n");
		printf("5. 최저 점수 출력 \n");
		printf("6. 종료 \n");
		printf("선택 > ");
		scanf("%d", &menu);

		switch (menu) {

			case 1:
				func(score, size);
				break;

			case 2:
				prt(score, size);
				break;

			case 3:
				avg(score, size);
				break;

			case 4:
				max(score, size);
				break;

			case 5:
				min(score, size);
				break;
		}
		if (menu == 6) break;
	}

	return 0;
}

void func(int *pscore, int size) {
	
	printf("\n ****점수 입력**** \n");

	for (int i = 0; i < size; i++) {
		printf("%d. 점수를 입력하세요 -> ", i+1);
		scanf("%d", &pscore[i]);
	}
}

void prt(int *pscore, int size) {
	
	printf("\n ****점수 출력**** \n");

	for (int i = 0; i < size; i++) {
		printf("%d.점수 : %d\n", i+1, pscore[i]);
	}
}

void avg(int *pscore, int size) {
	
	printf("\n ****평균 점수**** \n");

	int avg = 0;

	for (int i = 0; i < size; i++) {
		avg += pscore[i];
	}

	double res = (double)avg / 5;

	printf("평균 점수 : %.lf", res);
}

void max(int *pscore, int size) {
	
	printf("\n ****최고 점수**** \n");

	int max = pscore[0];

	for (int i = 1; i < size; i++) {
		if (pscore[i] > max) {
			max = pscore[i];
		}
	}
	printf("최고 점수 : %d", max);
}

void min(int *pscore, int size) {
	
	printf("\n ****최저 점수**** \n");

	int min = pscore[0];

	for (int i = 1; i < size; i++) {
		if (pscore[i] < min) {
			min = pscore[i];
		}
	}
	printf("최저 점수 : %d", min);
}
