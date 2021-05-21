#include <stdio.h>

// kullanýcýdan deðer isteyelim deðer 0 ve 100 arasýnda ise evet deðilse hayýr yazdýralým

int main(){
	
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi>0 && sayi<100){
		printf("\nEVET");
	}
	else{
		printf("\nHAYIR");
	}
	return 0;
}
