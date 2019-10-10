#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,denta;
	float x1,x2,x;
	printf ("Nhap cac he so cua phuong trinh :");
	scanf ("%d%d%d",&a,&b,&c);
	if (a==0 &&b==0&&c==0) printf ("\nPt vo so nghiem");
	else if(a==0 &&b==0) printf ("\nPT vo nghiem");
	else if (a==0)
    {
	 x=(float)-c/b;
	 printf ("\nNghiem cua pt la x = %.2f ",x);	
	}
	
	else
	{
	    denta=b*b-4*a*c;
    	if(denta<0) printf ("\nPhuong trinh vo nghiem ");
        else if (denta==0) 
    	{
		printf ("\nPhuong trinh co nghiem kep x1 = x2 = %f ",(float)-b/2*a);
	      }
	        else 
	      {
		x1=(float)(-b+sqrt(denta))/2*a;
		x2=(float)(-b-sqrt(denta))/2*a;
		printf ("\nPhuong trinh co nghiem x1 = %.2f , x2 = %.2f",x1,x2);
     	  }
   }
	
}
