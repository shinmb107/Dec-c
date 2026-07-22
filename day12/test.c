////5명 학생의 국어, 영어, 수학 입력 후 각 과목의 합계와 평점
//#include <stdio.h>
//#include <string.h>
//#define s	3
//
//struct student {
//	int kor, eng, math;
//};
//
//void input(struct student st[]);
//void output(struct student st[]);
//void stu(struct student st[]);
//void sub(struct student st[]);
//
//int main() {
//	struct student st[s] = {0};
////	input(st);
////	output(st);
////	stu(st);
////	sub(st);
//
//	int ch;
//	while (1) {
//		printf("1. 점수입력 \t 2. 점수출력 \t 3. 학생점수 \t 4. 과목 총합/평균 \t 5.종료 \t ->");
//		scanf("%d", &ch);
//		printf("\n");
//		switch (ch) { 
//			case 1:
//				input(st);
//				break;
//
//			case 2:
//				output(st);
//				break;
//
//			case 3:
//				stu(st);
//				break;
//
//			case 4:
//				sub(st);
//				break;
//		}
//		if (ch == 5) break;
//	}
//	return 0;
//}
//
//void input(struct student st[s]) {
//	for (int i = 0; i < s; i++) {
//		printf("국 영 수 점수 입력 -> %d번 학생 ", i+1);
//		scanf("%d %d %d", &(st[i].kor), &(st[i].eng), &(st[i].math));
//	}
//	printf("\n\n");
//}
//
//void output(struct student st[s]) {
//	for (int i = 0; i < s; i++) {
//		printf("%d번 학생의 국어 -> %d\t 영어 -> %d\t 수학 -> %d\n", (i+1), st[i].kor, st[i].eng, st[i].math);
//	}
//	printf("\n\n");
//}
//
//void stu(struct student st[s]) {
//	int sum;
//	double avg;
//
//	for (int i = 0; i < s; i++) {
//		sum = st[i].kor + st[i].eng + st[i].math;
//		avg = ((double)sum / 3.0);
//		printf("%d번 학생의 총점 -> %d\t 평균 -> %.1lf\n", i+1, sum, avg);
//	}
//	printf("\n\n");
//}
//
//void sub(struct student st[s]) {
//	int sum_kor = 0, sum_eng = 0, sum_math = 0;
//
//	for (int i = 0; i < s; i++) {
//		sum_kor += st[i].kor;
//		sum_eng += st[i].eng;
//		sum_math += st[i].math;
//	}
//	printf("국어 -> 총점:%d\t 평균:%.1lf\n", sum_kor, ((double)sum_kor/s));
//	printf("영어 -> 총점:%d\t 평균:%.1lf\n", sum_eng, ((double)sum_eng/s));
//	printf("수학 -> 총점:%d\t 평균:%.1lf\n", sum_math, ((double)sum_math/s));
//	printf("\n\n");
//}
