#include<stdio.h>
int main()
{
	float tongvon,tylelai;
	int sonam;
	printf ("Enter Capital Sum :");
	scanf ("%f",&tongvon);
	printf ("\nEnter rate of interest :");
	scanf ("%f",&tylelai);
	printf ("\nEnter no of years :");
	scanf ("%d",&sonam);
	for (int i=0;i<=sonam-1;i++)
	{
		float lai=(tongvon*tylelai)/100;
		tongvon+=lai;
		printf ("\nSo nam:%d\t\ntien lai:%f \t\ntongtien:%f",i+1,lai,tongvon);
	}
	
}
