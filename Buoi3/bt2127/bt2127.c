#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, x;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("\nNhap b: ");
	scanf("%d", &b);
	
	if(a == 0 && b == 0){
		printf("\nPhuong trinh vo so nghiem");
	}else if(a == 0 && b != 0){
		printf("\nPhuong trinh vo nghiem");
	}else{
		printf("\nPhuong trinh co nghiem: x = %d ", -b/a);
	}
	return 0;
}
