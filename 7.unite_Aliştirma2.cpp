#include <stdio.h>

// kullan�c�dan istenilen iki sayinin (x ve y) birbirine g�re durumunu inceleyelim 

int main(){
	int sayi1,sayi2;
	// kullan�c�dan iki sayi isteyelim
	
	printf("lutfen iki sayi giriniz \n");
	
    printf("lutfen birinci sayiyi giriniz: ");
    
    //kullan�c�dan istenilen sayiyi girelim
    scanf("%d",&sayi1);
    
	printf("lutfen ikinci sayiyi giriniz: ");
	
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2){
		printf("%d %d den buyuktur",sayi1,sayi2);
	}
	// else if baska bir karar yap�s� olu�turmak icin kullan�l�r 
	else if(sayi1<sayi2){
		printf("%d %d den kucuktur",sayi1,sayi2);
	}
	 else{
	 	printf("%d %d ye esittir",sayi1,sayi2);
	 }
	
	
	
	
	return 0;
	
}
