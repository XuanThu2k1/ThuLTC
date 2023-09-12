#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d, e, f;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	f = 6;
	int x = pow(a,6) + b*c*d + e*f;
	int y = pow(a,3) * pow(b,2) + a*b*c*d*e*f;
	printf("Gia tri x: %d", x);
	printf("\nGia tri y: %d", y);
	return 0;
}
