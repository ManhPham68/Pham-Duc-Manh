#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	for (int i = 2; i < n; ++i)
	{
		int dem=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				dem++;
				break;
			}
		}
		if(dem == 0){
			printf("%d\t",i);
		}
	}
	return 0;
}
