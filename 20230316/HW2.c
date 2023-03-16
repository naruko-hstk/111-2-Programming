/** Powered by 友人S from HuskCat */
/** From UCH Programming Test Q16 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int now_h, now_m, now_s, end_h, end_m, end_s;
	do{
		printf("Give me current time\n");
		scanf("%d:%d", &now_h, &now_m);
		if (now_h < 0 || now_h >= 24 || now_m < 0 || now_m >= 60) continue;
		printf("Give me end time\n");
		scanf("%d:%d", &end_h, &end_m);
		if (end_h < 0 || end_h >= 24 || end_m < 0 || end_m >= 60) continue;
		int result_h = end_h - now_h;
		int result_m = end_m - now_m;
		if (result_h < 0) result_h += 24;
		if (result_m < 0) {
			result_m += 60;
			result_h -=1;
		}
		if (result_h == 0) printf("Left %d Minutes");
		else if (result_h == 0 && result_m == 1) printf("Left %d Minute");
		else if (result_m == 0) printf("Left %d Hours");
		else if (result_m == 0 && result_h == 1) printf("Left %d Hour");
		else if (result_h == 1) printf("Left %d Hour and %d minutes");
		else if (result_m == 1) printf("Left %d Hours and %d minute");
		else printf("Left %d Hours and %d Minutes\n");
	} while(now_h > 0 && now_h < 24 && now_m > 0 && now_m < 60 && end_h > 0 && end_h < 24 && end_m > 0 && end_m < 60);
	return 0;
}
