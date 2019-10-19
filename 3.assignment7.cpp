#include<stdio.h>
int main()
{
	int n,A[100],max=0,dem=0;
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
	 		dem ++;
		 }
		else
		{
			dem=0;
		}
		if (dem>max) max=dem;
	}
	 
	 printf ("\nSo luong so nguyen duong lien tiep nhieu nhat la : %d",max);
	

}
	
