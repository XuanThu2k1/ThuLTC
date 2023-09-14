#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, delta;
	printf("\nNhap a: ");
	scanf("%f",&a);
	printf("\nNhap b: ");
	scanf("%f",&b);
	printf("\nNhap c: ");
	scanf("%f",&c);
	
	if(a==0){
		printf("\nDay la phuong trinh bac nhat");
		if(b == 0 && c == 0){
		printf("\nPhuong trinh vo so nghiem");
		}else if(b == 0 && c != 0){
		printf("\nPhuong trinh vo nghiem");
		}else{
		printf("\nPhuong trinh co nghiem: x = %f ", -c/a);
		}
	}else{
		delta = b*b-4*a*c;
//		x1 = (-b+sqrt(delta))/(2*a);
//		x2 = (-b-sqrt(delta))/(2*a);
		if(delta<0){
			printf("\nPhuong trinh vo nghiem");
		}
		else if(delta==0){
			printf("\nPhuong trinh co nghiem kep: x = %f ", -b/(2*a));
		}
		else{
			printf("\nPhuong trinh co 2 nghiem phan biet:");
			printf("\nx1 = %f",(-b+sqrt(delta))/(2*a));
			printf("\nx2 = %f",(-b-sqrt(delta))/(2*a));
		}
	}
	return 0;
}
