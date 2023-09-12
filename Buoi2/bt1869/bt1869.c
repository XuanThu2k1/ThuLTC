#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char rollno[16];
	int age;
	char name[50];
	char address[200];
	printf("\nNhap ten: ");
	scanf("%s",&name);
	printf("\nNhap tuoi: ");
	scanf("%d",&age);
	printf("\nNhap ma sinh vien: ");
	scanf("%s",&rollno);
	printf("\nNhap dia chi: ");
	scanf("%s",&address);
	printf("\n========================================================");
	printf("\n| Ten           | Tuoi    | Ma SV     | Dia chi        |");
	printf("\n========================================================");
	printf("\n| %s		      | %d      | %s        | %s             |",name,age,rollno,address);
	return 0;
}
