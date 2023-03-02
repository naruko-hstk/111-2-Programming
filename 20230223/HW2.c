/** Powered by 友人S from HuskCat */
/** From UCH Programming Test Q16 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k, n = 1;
	printf("Please input a number between 0 to 100:");
	do { scanf("%d", &k); } while (k < 0 || k > 100);
	for ( int counter = k; counter <= 500; counter = k * n ) {
		printf("%d", counter);
		if( k * ( n + 1 ) <= 500 ) printf(", ");
		else printf("\n");
		n += 1;
	}
	return 0;
}
