#include<stdio.h>
int main()
{
	int n,A[100],S=0,T=0;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("Arr[%d]=",i);
		scanf ("%d",&A[i]);
		
	}
	printf ("\nMang sau khi nhap la :");
	for (int i=1;i<=n;i++)
	{
		printf  ("\t%d",A[i]);
	}
	 for (int i=1;i<=n;i++)
	 {
	 	if (A[i]>0)
	 	{
	 		S+=A[i] ;
		 }
		else
		{
			S=0;
		}
		if (S>T) T=S;
	}
	 
	 printf ("\nChuoi so nguyen duong lien co tong lon nhat la : %d",T);
	

}
	
