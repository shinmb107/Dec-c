#include <stdio.h>

int main() {

	int i, j;
	char ch;

	while (ch != 's') {

		if(i>0) {
			printf("몇단을 출력할 것인가요? (s 종료)");
			scanf("%d/n", &i);

			for(j = 1; j < 10; j++) {
				printf("%d x %d = %d\n", i, j, i * j);
			}
		}
		else {
			printf("종료합니다.");
			break;
		}
	}

	return 0;
}
