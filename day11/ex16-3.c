//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int *pi;
//	int size = 5;
//	int count = 0;
//	int num;
//
//	pi = (int *)calloc(size, sizeof(int));
//	while (1) {
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size) {
//			size += 5;
//			pi = (int *)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//
//	for (int i = 0; i < count; i++) {
//		printf("%5d\n", pi[i]);
//	}
//
//	free(pi);
//
//	return 0;
//}
