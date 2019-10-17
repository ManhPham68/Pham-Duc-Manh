#include<stdio.h>
int main()
{
	int n,A[100],dem=0,t=0;
	float s=0;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf ("\nArr[%d] =",i);
		scanf("%d",&A[i]);
		
	}
	printf ("Mang sau khi nhap  :");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	printf ("\nMang sau khi thay the");
	for (int i=1;i<=n;i++)
	{
		if(A[i]<0)
		A[i]=0;
	}
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	}
	
	
	
}
