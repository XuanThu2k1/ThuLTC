#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Bai 1:
//	int i = 1, n, tong;
//	printf("Bai 1:");
//	printf("\nNhap n: ");
//	scanf("%d",&n);
//	
//	while(i<=n){
//		tong += i;
//		i++;
//	}	
//	printf("\nS(%d) = %d", n, tong);
	
	//Bai 2:
//	int i=1, n, Tong;
//	printf("\nBai 2: ");
//	printf("\nNhap n: ");
//	scanf("%d", &n);
//	
//	while(i<=n){
//		Tong += i*i;
//		i++;
//	}
//	printf("\nS(%d) = %d", n, Tong);
	
	//Bai 3:
//	float i=1, n, s;
//	printf("\nBai 3: ");
//	printf("\nNhap n: ");
//	scanf("%f", &n);
//	
//	while(i<=n){
//		s += 1/i;
//		i++;
//	}
//	printf("\nS(%f) = %f", n, s);
	
	//Bai 4: 
//	float i=1, n, S;
//	printf("\nBai 4: ");
//	printf("\nNhap n: ");
//	scanf("%f", &n);
//	while(i<=n){
//		S += 1/(i*i);
//		i++;
//	}
//	printf("\nS(%f) = %f", n, S);
	
	//Bai 5:
	float i=1, n, S;
	printf("\nBai 5: ");
	printf("\nNhap n: ");
	scanf("%f",&n);
	while(i<=n){
		S += 1/((2*n)+1);
		i++;
	}
	printf("\nS(%f) = %f", n, S);
	return 0;
}
