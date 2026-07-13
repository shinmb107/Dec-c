//#include <stdio.h>
//
//void main() {
//
//	int ary[3];
//	int *pa = ary;
//	int i;
//
//	*pa = 10;
//	*(pa + 1) = 20;
//	*(pa + 2) = *(pa + 0) + *(pa + 1);		// pa 2 주소에 pa 0주소와 pa 1주소에 있는 값을 더한 값을 대입
//	pa[2] = pa[0] + pa[1];				// pa 2 값에 pa 0 값과 pa 1 값을 더하여 대입 
//	
//	for (i = 0; i < 3; i++){
//		printf("%5d", pa[i]);
//	} 
//	ary[0] ary[1] ary[2]
//	
//	*(pa + 0) *(pa + 1) *(pa + 2)
//	
//	return;
//}
