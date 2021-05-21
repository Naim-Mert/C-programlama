#include<stdio.h>
// kullanıcan sayı istensin ve istenilen sayini x=10 a göre büyük kücük esit olup olmadığını inceleyelim
int main(){
	int sayi,x;
	x=10;
	
	// sayı isteyelim
	printf("lutfen bir sayi giriniz:",sayi);
	
	//sayi girelim
	scanf("%d",&sayi);
	
	if(sayi>x){
		printf("%d buyuktur x degerinden",sayi);
	}
	else if(sayi<x){
		printf("%d kucuktur x degerinden",sayi);
	}
	else{
		printf("%d esittir x degerine",sayi);
	}
	
	
	
	return 0;
}

