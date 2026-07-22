//#include <stdio.h>
//#include <string.h>
//
//void swap_ptr(char **ppa, char **ppb);			// 바뀐 포인터 주소를 가져오기 위해 이중 포인터로 가져옴 
//
//int main() {
//	
//	char *pa = "success";						// pa 포인터에 값 대입 
//	char *pb = "failure";						// pb 포인터에 값 대입
//	
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	printf("pa -> %u, pb -> %u\n", pa, pb);
//	printf("pa -> %x, pb -> %x\n", pa, pb);
//	
//	swap_ptr(&pa, &pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	printf("pa -> %c, pb -> %c\n", *pa, *pb);
//	printf("pa -> %u, pb -> %u\n", pa, pb);
//	printf("pa -> %x, pb -> %x\n", pa, pb);
//	return 0;
//}
//
//void swap_ptr(char **ppa, char **ppb) {			// 포인터와 포인터의 주소를 바꾸기 위해 이중 포인터 변수 선언 
//	
//	char *pt;									// 포인터 변수 선언
//	
//	pt = *ppa;									// pt에 ppa 주소 대입 | pt -> success
//	*ppa = *ppb;								// ppa 주소에 ppb 주소 대입 | ppa -> failure
//	*ppb = pt;									// ppb 주소에 pt 주소 대입 | ppb -> success
//												// ppa = ppb주소 | ppb = pt주소 | pt = ppa 주소 
//}
