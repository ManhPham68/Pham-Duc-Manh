//ktra 3 so co phai 3 canh 1 tam giac k?
#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c ;
	float S=0;
	scanf ("%d %d %d",&a,&b,&c);
	if((a+b>c) && (a+c>b) && (b+c>a))
	{
     printf ("Day la 1 tam giac ");
     int cv=a+b+c;
     printf ("\nChu vi la %d",cv);
     float p=(float)(a+b+c)/2;
     printf ("\np=%f",p);
     S=sqrt(p*(p-a)*(p-b)*(p-c));
     printf ("\nDien tich = %f",S);
   }
   else 
   {
   printf ("Day khong la tam giac ");
   }
}
