//#include <stdio.h>
//#include <string.h>
//
//void func(void (*pps)(int *, int), int *pscore, int size);
//
//void func_num(int *pscore, int size);
//void prt_num(int *pscore, int size);
//void avg_num(int *pscore, int size);
//void max_num(int *pscore, int size);
//void min_num(int *pscore, int size);
//
//int main() {
//
//    int menu;
//    int score[5];
//    int size = sizeof(score) / sizeof(score[0]);
//
//    while (1) {
//
//        printf("\n\n======================== 학생 성적 관리 ===========================\n\n");
//        printf("1. 점수 입력\n");
//        printf("2. 점수 출력\n");
//        printf("3. 평균 출력\n");
//        printf("4. 최고 점수 출력\n");
//        printf("5. 최저 점수 출력\n");
//        printf("6. 종료\n");
//        printf("선택 > ");
//        scanf("%d", &menu);
//
//        switch (menu) {
//
//        case 1:
//            func(func_num, score, size);
//            break;
//
//        case 2:
//            func(prt_num, score, size);
//            break;
//
//        case 3:
//            func(avg_num, score, size);
//            break;
//
//        case 4:
//            func(max_num, score, size);
//            break;
//
//        case 5:
//            func(min_num, score, size);
//            break;
//		}
//		if (menu == 6) break;
//	}
//
//    return 0;
//}
//
//void func(void (*pps)(int *, int), int *pscore, int size) {
//    pps(pscore, size);
//}
//
//void func_num(int *pscore, int size) {
//
//    printf("\n**** 점수 입력 ****\n");
//
//    for (int i = 0; i < size; i++) {
//        printf("%d. 점수를 입력하세요 -> ", i + 1);
//        scanf("%d", &pscore[i]);
//    }
//
//    for (int i = 0; i < size; i++) {
//        printf("%5d", pscore[i]);
//    }
//}
//
//void prt_num(int *pscore, int size) {
//
//    printf("\n**** 점수 출력 ****\n");
//
//    for (int i = 0; i < size; i++) {
//        printf("%d. 점수 : %d\n", i + 1, pscore[i]);
//    }
//}
//
//void avg_num(int *pscore, int size) {
//
//    printf("\n**** 평균 점수 ****\n");
//
//    int sum = 0;
//
//    for (int i = 0; i < size; i++) {
//        sum += pscore[i];
//    }
//
//    double res = (double)sum / size;
//
//    printf("평균 점수 : %.2lf\n", res);
//}
//
//void max_num(int *pscore, int size) {
//
//    printf("\n**** 최고 점수 ****\n");
//
//    int max = pscore[0];
//
//    for (int i = 1; i < size; i++) {
//        if (pscore[i] > max) {
//            max = pscore[i];
//        }
//    }
//
//    printf("최고 점수 : %d\n", max);
//}
//
//void min_num(int *pscore, int size) {
//
//    printf("\n**** 최저 점수 ****\n");
//
//    int min = pscore[0];
//
//    for (int i = 1; i < size; i++) {
//        if (pscore[i] < min) {
//            min = pscore[i];
//        }
//    }
//
//    printf("최저 점수 : %d\n", min);
//}
