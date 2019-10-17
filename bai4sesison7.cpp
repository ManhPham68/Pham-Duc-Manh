#include<stdio.h>
int main()
{
	int n,A[100] ,j=1,i;
	printf ("Nhap so phan tu cua mang :");
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
    {
    	printf ("Arr[%d]=",i);
    	scanf ("%d",&A[i]);
    	for (int j=1;j<i;j++)
    	{
    		if (A[i]==A[j])
    		{
    			--i;
    			break;
			}
		}
    }

	
		
	printf ("Mang sau khi nhap  :");
	for (int i=1;i<=n;i++)
	{
		printf ("\t%d",A[i]);
	
	}	
}
