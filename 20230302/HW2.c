/** Powered by 友人S from HuskCat */
/** From UCH Programming Test Q16 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input, hour, minute, second;
	printf("Please input second to convert:");
	scanf("%d", &input);
	hour = input / 3600;
	minute = input % 3600 / 60;
	second = input % 3600 % 60;
	printf("Here's convert result:\n%02d:%02d:%02d\n",hour, minute, second);
	return 0;
}
