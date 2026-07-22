//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	printf("%p %p\n", &a, pa);
//	printf("%p\n\n", pa + 1);
//
//
//	int ary1[] = {1, 2};
//	int (*pary1) = ary1;							// 1차원 int형 배열을 가리키는 배열 포인터
//	printf("%p %p\n", ary1, pary1);
//	printf("%p %p\n\n", ary1 + 1, pary1 + 1);		//4바이트(int) 증가
//
//
//	char ary2[] = {'a', 'b'};
//	char (*pary2) = ary2;							// 1차원 char형 배열을 가리키는 배열 포인터
//	printf("%p %p\n", ary2, pary2);
//	printf("%p %p\n\n", ary2 + 1, pary2 + 1);		// 1바이트(char) 증가
//
//
//	int ary3[][3] = {{1, 2, 3}, {4, 5, 6}};
//	int (*pary3)[3] = ary3;							// 2차원 배열을 가리키는 배열 포인터
//	printf("%p %p\n", ary3, pary3);
//	printf("%p %p\n\n", ary3 + 1, pary3 + 1);		//12바이트 (int 3개) 증가
//
//
////	char* ary4[] = {"hi", "good", "thank"};			// 문자열의 시작 주소를 저장하는 배열 (기본 한칸에 8바이트)
////	char* (*pary4) = ary4;							// char형 배열 포인트를 가르키는 배열 포인터
////	printf("%p %p\n", ary4, pary4);					//
////	printf("%p %p\n", ary4 + 1, pary4 + 1);			// 8바이트 증가
////	printf("%p %p\n\n", ary4 + 2, pary4 + 2);		// 16바이트 증가
//
//	return 0;
//}
