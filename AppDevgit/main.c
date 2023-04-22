#include<stdio.h>
#include "pascal.h"
#include "screen.h"

int main() {
	int n, k;
	setColors(CYAN, GREEN);
	clearScreen();
	printf("\033[1;31m");
	for (n = 0; n < ROWS; n++) {
		for (k = 0; k <= ROWS - n; k++) {
			printf("  ");
		}
		for (k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k));
		}
		printf("\n");
	}
	resetScreen();
}