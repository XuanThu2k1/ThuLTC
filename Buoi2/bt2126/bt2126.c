#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Chieudai, Chieurong, DienTich, ChuVi;
	printf("Bai 1:");
	printf("\nNhap chieu dai hinh chu nhat: ");
	scanf("%f",&Chieudai);
	printf("\nNhap chieu rong hinh chu nhat: ");
	scanf("%f",&Chieurong);
	DienTich = (Chieudai * Chieurong);
	printf("\nDien tich hinh chu nhat la: %f",DienTich);
	ChuVi = ((Chieudai + Chieurong) * 2);
	printf("\nChu vi hinh chu nhat la: %f",ChuVi);
	
	float r, C, S;
	float pi = 3.14;
	printf("\nBai 2: ");
	printf("\nNhap ban kinh cua hinh tron: ");
	scanf("%f",&r);
	C = 2 * r * pi;
	printf("\nChu vi hinh tron: %f",C);
	S = r * r * pi; 
	printf("\nDien tich hinh tron: %f",S);
	
	int N, i;
	printf("\nBai 3: ");
	printf("\nNhap so nguyen N: ");
	scanf("%d", &N);
	printf("\nCac so tu 1 toi N la: ");
	for(i = 1; i <= N; i++)
	{
		printf(" %d ",i);
	}
	return 0;
}
