#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, a3, a4;
	printf("\nNhap a1: ");
	scanf("%d",&a1);
	printf("\nNhap a2:");
	scanf("%d",&a2);
	printf("\nNhap a3: ");
	scanf("%d",&a3);
	printf("\nNhap a4:");
	scanf("%d",&a4);
	
	if(a1>a2 && a1>a3 && a1>a4){
		printf("\nSo nguyen lon nhat la: %d",a1);
	}else if(a2>a1 && a2>a3 && a2>a4){
		printf("\nSo nguyen lon nhat la: %d",a2);
	}else if(a3>a1 && a3>a2 && a3>a4){
		printf("\nSo nguyen lon nhat la: %d",a3);
	}
	else if(a4>a1 && a4>a2 && a4>a3){
		printf("\nSo nguyen lon nhat la: %d",a4);
	}
	
	if(a1<a2 && a1<a3 && a1<a4){
		printf("\nSo nguyen nho nhat la: %d",a1);
	}else if(a2<a1 && a2<a3 && a2<a4){
		printf("\nSo nguyen nho nhat la: %d",a2);
	}else if(a3<a1 && a3<a2 && a3<a4){
		printf("\nSo nguyen nho nhat la: %d",a3);
	}else if(a4<a1 && a4<a2 && a4<a3){
		printf("\nSo nguyen nho nhat la: %d",a4);
	}
	return 0;
}
