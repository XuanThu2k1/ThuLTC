#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	
	if(a<b){
		printf("\nSo lon nhat la: %d",b);
		printf("\nSo nho nhat la: %d",a);
	}else{
		printf("\nSo lon nhat la: %d",a);
		printf("\nSo nho nhat la: %d",b);
	}
	return 0;
}
