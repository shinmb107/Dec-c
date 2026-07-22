//#include <stdio.h>
//
//int scan_num(int ary[5], int size);
//int tot_num(int ary[5], int size);
//double avg_num(int ary[5], int size);
//
//int main() {
//
//    int ary[5];
//    double avg;
//
//    scan_num(ary, size);
//    tot_num(ary, size);
//    avg_num(ary, size);
//
//    printf("총점 : %d\n", tot);
//    printf("평균 : %.2lf\n", avg);
//
//    return 0;
//}
//
//int scan_num(int ary[5], int size) {
//
//	int kor, eng , mat, soc, sci;
//
//	printf("국어 점수: ");
//	scanf_s("%d", &kor);
//	ary[0] = kor;
//
//	printf("영어 점수: ");
//	scanf_s("%d", &eng);
//	ary[1] = eng;
//
//	printf("수학 점수: ");
//	scanf_s("%d", &mat);
//	ary[2] = mat;
//
//	printf("사회 점수: ");
//	scanf_s("%d", &soc);
//	ary[3] = soc;
//
//	printf("과학 점수: ");
//	scanf_s("%d", &sci);
//	ary[4] = sci;
//
//	printf("국어 점수 : %d, 영어 점수 : %d, 수학 점수 : %d, 사회 점수 : %d, 과학 점수 : %d\n", kor, eng, mat, soc, sci);
//
//	return 5;
//}
//
//int tot_num(int ary[5], int size) {
//
//	int tot = 0;
//	int i;
//
//	for (i = 0; i < size; i++) {
//		tot += ary[i];
//	}
//
//	return tot;
//}
//
//double avg_num(int ary[5], int size) {
//
//	int tot = 0;
//	double avg = 0;
//	int i;
//
//	for (i = 0; i < size; i++) {
//		tot += ary[i];
//	}
//
//	avg = (double)tot / size;
//
//	return avg;
//}
