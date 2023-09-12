#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Bai1
	int a, b , c , d ;
	printf("\nNhap a bat ki: ");
	scanf("%d",&a);
	b = pow(a,2);
	printf("\na^2 = %d",b);
	c = pow(a,3);
	printf("\na^3 = %d",c);
	d = pow(a,4);
	printf("\na^4 = %d",d); 
	
	//Bai2
	int ngay, thang, nam;
	printf("\nNhap ngay: ");
	scanf("%d",&ngay);
	printf("\nNhap thang: ");
	scanf("%d",&thang);
	printf("\nNhap nam: ");
	scanf("%d",&nam);
	printf("\nNgay,Thang,Nam: %d/%d/%d",ngay,thang,nam);
	
	//Bai3:
	float x,y,tong, hieu, nhan, chia;
	printf("\nNhap x: ");
	scanf("%f",&x);
	printf("\nNhap y: ");
	scanf("%f",&y);
	tong = x + y;
	printf("\nTong x va y là: %f",tong);
	hieu = x - y;
	printf("\nTong x va y là: %f ",hieu);
	nhan = x * y;
	printf("\nTong x va y là: %f ",nhan);
	chia = x / y;
	printf("\nTong x va y là: %f ",chia);
	
	return 0;
}
