#include <stdio.h>
// 1den n e kadar sayıların ekrana yazdırılması
int main(){
	int n,sayi=0;
	
	printf("n:");
	scanf("%d",&n);
	
	art:
	
	sayi=sayi+1;
	
	printf("%d\n",sayi);
	
	if(sayi<n)
		goto art;
	
	
	return 0;

}
