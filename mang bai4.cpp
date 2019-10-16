#include<stdio.h>
int main()
{
int  n,A[15],i;
	printf ("\nNhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("\nArr[%d] =",i);
		scanf("%d",&A[i]);
		
	}
	printf ("Mang sau khi nhap la :");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nSo nghich dao :");
		for (int i=1;i<=n;i++)
		{
		do
	    {
	    	int s=A[i]%10;
	           printf ("%d",s);
	        	
	     }while (A[i]/=10);
	     printf ("\t");
	    
	     
	   }
	 
}
