#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,denta;
	float x1,x2,x;
	printf ("Nhap cac he so cua phuong trinh :");
	scanf ("%d%d%d",&a,&b,&c);
	if (a==0)
    {
	 x=(float)-c/b;
	 printf ("Nghiem cua pt la x = %.2f ",x);	
	}else 
	{
	    denta=b*b-4*a*c;
    	if(denta<0) printf ("Phuong trinh vo nghiem ");
        else if (denta==0) 
    	{
		printf ("Phuong trinh co nghiem kep x1 = x2 = %f ",(float)-b/2*a);
	      }
	        else 
	      {
		x1=(float)(-b+sqrt(denta))/2*a;
		x2=(float)(-b-sqrt(denta))/2*a;
		printf ("Phuong trinh co nghiem x1 = %.2f , x2 = %.2f",x1,x2);
     	  }
   }
	
}
