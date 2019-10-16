#include<stdio.h>
#include<math.h>
int main()
{
	int  n,A[15];
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("Arr[%d] =",i);
		scanf("%d",&A[i]);
		
	}
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nGia tri trung binh cua mang la :");
	int S=0,dem=0;
	float T;
	for (int i=1;i<=n;i++)
	{
	 S+=A[i];
	 dem++;
	 T=(float)S/dem;	
	}
	printf ("%.3f",T);
}
