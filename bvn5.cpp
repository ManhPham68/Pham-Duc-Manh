#include<stdio.h>
int main()
{
	int n;
	do
 {
	do
	{
    printf ("\nMENU");
    printf ("\nBan muon an gi nao :");
	printf("\n1.Do an");
	printf("\n2.Do uong");
	printf("\n3.Tinh tien");
	printf("\n4.Ket thuc giao dich.");
	printf ("\nChon tu 1 ==> 4 de goi mon :");
	scanf ("%d",&n);
    } while (n<=0||n>4);
    do
    {
	switch(n)
    	{
    		
         	 case 1 : printf ("Chon do an");
		     break;
    	     case 2 : printf ("\nChon do uong");
		     break;
    	     case 3 : printf ("\nTinh tien");
		     break;
		     case 4 :printf ("\nHEN GAP LAI .");
		    
		}
	}while(n>4);
}while (n==1||n==2||n==3);


}
