#include<stdio.h>
int main()
{
	int n,A[100];
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
    {
		
		do {
			printf ("A[%d]=",i);
	    	scanf ("%d",&A[i]);
			
		}while (A[i]==A[i-1]);
		
	}
	
		
	printf ("Mang sau khi nhap  :");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	
	}	
		}
