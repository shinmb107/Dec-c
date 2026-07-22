//#include <stdio.h>
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	const int *pa = &a;						// 데이터 상수
//	int* const pb = &a;						// 변수 상수
//	const int* const pc = &a;				// 완전 상수화 
//
//	printf("변수 a 값 : %d\n", a);
//	printf("변수 a 값 : %d\n\n", *pa);
//
//	//*pa = 100;							// const 포인터이기 때문에 데이터 값 변경을 불허한다.
//
//	pa = &b;								// 주소 값 변경이 가능하다. 
//	printf("변수 b 값 : %d\n", *pa);
//	printf("변수 b 값 : %d\n\n", b);
//	
//	*pb = 200;								// 간접 참조로 값의 변경이 가능하다. 
//	printf("변수 b 값 : %d\n\n", *pb);
//	
//	//pb = &a;								// 포인트 변수에 다른 주소를 변경할 수 없다. 
//
//	return 0;
//}
