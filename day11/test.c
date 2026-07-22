//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//
//	char name[100];
//	char tel[100];
//	char *str[3];
//	int age;
//
//	printf("이름을 입력하세요 : ");
//	fgets(name, sizeof(name), stdin);
//	str[0] = (char *)malloc(strlen(name) + 1);
//	strcpy(str[0], name);
//
//	printf("나이를 입력하세요 : ");
//	scanf("%d", &age);
//	getchar();
//
//	printf("전화번호를 입력하세요 : ");
//	fgets(tel, sizeof(tel), stdin);
//	str[1] = (char *)malloc(strlen(tel) + 1);
//	strcpy(str[1], tel);
//
//	printf("%s\t", str[0]);
//	printf("%d\t", age);
//	printf("%s\t", str[1]);
//
//
//	for (int i = 0; i < 2; i++) {
//		free(str[i]);
//	}
//
//	return 0;
//}
