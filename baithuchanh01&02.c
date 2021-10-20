#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main(int argc, char *argv[]) {
int a,b;
int sum(a,b);
int sub(a,b);
int mul(a,b);
float chia(a,b);
	int chon;
	char nhap,nhapdiem;
	int kq;
	do
	{
	printf("nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("nhap so thu 2:\n");
	scanf("%d",&b);
	printf("ban muon thuc hien phep tinh nao\n");
	printf("1 cong\n");
	printf("2 tru\n");
	printf("3 nhan\n");
	printf("4 chia\n");
	printf("hay chon phep tinh muon thuc hien\n");
	scanf("%d",&chon);
	switch(chon)
	 {
	 	case 1:
	 		sum(a,b);
	 		break;
	 	case 2:
	 		sub(a,b);
	 		break;
	 	case 3:
	 		mul(a,b);
	 		break;
	 	case 4:
	 		chia(a,b);
	 		break;
	}
	printf("ban co muon tiep tuc thuc hien cac phep tinh\n");
	printf(" y de tiep tuc");
	printf(" n de ket thuc");
	fflush(stdin);
	scanf("%c",&nhapdiem);
	}while(nhapdiem!='n');
	{
		printf("end\n");
	}
	
	
	return 0;
}
int sum(int a, int b)
{	printf("sum = %d",a+b);

}
int sub(int a,int b)
{
	printf("sub = %d",a-b);
}
int mul( int a,int b)
{
	printf("mul = %d",a*b);
}
float chia(int a ,int b)
{
	printf("div = %f",(float)a/b);
}





baithuchanh02

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int num[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Nhap vao so nguyen thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nResult: ");
	for(i = 9; i >= 0; i--)
	{
		printf(" %d ", num[i]);
	}
	return 0;
}
