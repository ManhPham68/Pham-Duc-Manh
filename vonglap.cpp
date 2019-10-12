#include<stdio.h>
int main()
{
	printf ("Nhap do dai 3 canh cua mot tam giac:");
	int a,b,c;
	do
	{
		printf("\nNhap do dai canh thu nhat :");
		scanf("%d",&a);
		printf("\nNhap do dai canh thu hai :");
		scanf("%d",&b);
		printf("\nNhap do dai canh thu ba :");
		scanf("%d",&c);
		if( a+b>c && a+c>b && b+c>a) 
		{
		 printf ("\n^^Day la 3 canh cua 1 tam giac ^^");
	    }
		else
		{
		printf ("\nNhap lai 3 canh :");
	    }
		
	}while(a+b<=c||a+c<=b||b+c<=a);
}
