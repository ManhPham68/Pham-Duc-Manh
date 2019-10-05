#include<stdio.h>
int main()
{
	int a;
	do
   {  
	printf ("Nhap A = ");
	scanf ("%d",&a);
   }
	while(a==0);
	if(a>0) printf ("A la so duong");
	else printf("A la so am ");
	return 0;
	
	
}
