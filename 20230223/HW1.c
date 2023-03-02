/** Generate by ChatGPT */
/** From UCH Progamming Test Q16 */
#include <stdio.h>

int main(){
	int n;
	do {
		printf("請輸入一個小於100的正整數：");
		scanf("%d", &n);
	} while (n <= 0 || n >= 100);

	printf("500以內%d的倍數爲：\n", n);
	for (int i = 1; i <= 500; i++) {
		if (i % n == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
