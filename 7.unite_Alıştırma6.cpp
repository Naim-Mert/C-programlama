#include <stdio.h>

// kullan�c�dan de�er isteyelim de�er 0 dan k�c�k ise soguk 0-15 aras� �l�k aksi takdirde s�cak yazal�m

int main(){
	
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0){
		printf("\nHava SOGUK");
	}
	else if(sayi>0 && sayi<15-){
		printf("\nHava ILIK");
	}
	
	else {
		printf("\nHava SICAK");
	}
	
	return 0;
}
