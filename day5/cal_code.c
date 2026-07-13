//#include <stdio.h>
//
//int cal_add(int num1, int num2);
//int cal_div(int num1, int num2);
//int cal_mul(int num1, int num2);
//int cal_div(int num1, int num2);
//
//int main() {
//
//	int num1, num2;
//	char ch;
//	int res;
//
//
//	while (ch != 's') {
//		printf("계산식을 입력하세요.");
//		scanf("%d %c %d",&num1, &ch, &num2);
//
//		switch (ch) {
//			case '+' :
//				printf(" = %d", cal_add(num1, num2));
//				break;
//
//			case '-' :
//				printf(" = %d", cal_div(num1, num2));
//				break;
//
//			case '*' :
//				printf(" = %d", cal_mul(num1, num2));
//				break;
//
//			case '/' :
//				printf(" = %d", cal_div(num1, num2));
//				break;
//		}
//		printf("\n\n");
//	}
//	return 0;
//}
//
//int cal_add(int num1, int num2) {
//
//	int cal_res;
//	cal_res = (num1 + num2);
//
//	return cal_res;
//}
//
//int cal_sub(int num1, int num2) {
//
//	int cal_res;
//	cal_res = (num1 - num2);
//
//	return cal_res;
//}
//
//int cal_mul(int num1, int num2) {
//
//	int cal_res;
//	cal_res = (num1 * num2);
//
//	return cal_res;
//}
//
//int cal_div(int num1, int num2) {
//
//	int cal_res;
//	cal_res = (num1 / num2);
//
//	return cal_res;
//}
