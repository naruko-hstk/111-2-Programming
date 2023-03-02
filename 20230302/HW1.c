/** Generate by ChatGPT */
/** From UCH Progamming Test Q17 */
#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainder;

    printf("請輸入秒數：");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remainder = seconds % 3600;
    minutes = remainder / 60;
    remainder = remainder % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, remainder);

    return 0;
}

