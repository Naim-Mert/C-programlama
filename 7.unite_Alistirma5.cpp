#include <stdio.h>

// kullan�c�dan de�er isteyelim de�er 0 dan k�c�k veya 100den b�y�k aras�nda ise evet de�ilse hay�r yazd�ral�m

int main(){
	
	int sayi;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0 || sayi>100){
		printf("\nEVET");
	}
	else{
		printf("\nHAYIR");
	}
	return 0;
}
