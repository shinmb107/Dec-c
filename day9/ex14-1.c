//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	int score[3][4];						//3x4배열 
//	int total;
//	double avg;
//	
//	for (int i = 0; i < 3; i++) {			//score[3]
//		printf("4과목의 점수를 입력 : ");
//		
//		for (int j = 0; j < 4; j++) {		//score[4]
//			scanf("%d", &score[i][j]);		//i, j의 수 만큼 입력 값을  대입
//		}
//	}
//	
//	for (int i = 0; i < 3; i++) {			//score[3]
//		total = 0;
//		
//		for (int j = 0; j < 4; j++) {		//score[4]
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
//	}
//	
//	return 0;
//}
